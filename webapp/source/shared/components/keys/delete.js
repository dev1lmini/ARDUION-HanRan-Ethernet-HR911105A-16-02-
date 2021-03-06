import axios from 'axios';

export default (user, thingName, thingType, type, dispatch) => {
  axios({
    method: 'delete',
    url: '/api/keys',
    data: {
      user: user,
      thingName: thingName,
      type: type,
      thingType: thingType
    }
  })
    .then(result => {
      if (result.data.success) {
        return dispatch({type: 'REMOVE_KEY', thingName: thingName, keyType: type})
      }
      throw new Error(result.data.error);
    })
    .catch(error => {
      console.log(error.message);
    })
}
