import React from 'react';
import { match } from 'react-router';

import renderLayout from 'server/render-layout';
import render from 'server/render';
import settings from 'server/settings';

import configureStore from 'shared/configure-store';
import createRoutes from 'shared/routes';

const store = configureStore();
const routes = createRoutes(store, React);
const initialState = store.getState();

export default (req, res, next) => {
  console.log('URL MDKIDNJDNJI', req.originalUrl.split('/')[1]);
  if (req.originalUrl.split('/')[1] === 'socket.io') {
    console.log('Go next!!');
    return next();
  }
  console.log('loower');
    match({routes, location: req.url}, (error, redirectLocation, renderProps) => {
      if (error) {
        res.status(500).send(error.message);
      } else if (redirectLocation) {
        res.redirect(302, redirectLocation.pathname + redirectLocation.search);
      } else if (renderProps) {
        const rootMarkup = render(React)(renderProps, store);
        res.status(200).send(renderLayout({settings, rootMarkup, initialState}));
      } else {
        res.status(404).send('Not found');
      }
    });
};
