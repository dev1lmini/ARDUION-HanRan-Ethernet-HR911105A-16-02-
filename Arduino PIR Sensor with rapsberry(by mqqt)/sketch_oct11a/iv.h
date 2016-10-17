//AES key
extern const byte key[] = { 0x2B, 0x7E, 0x15, 0x16, 0x28, 0xAE, 0xD2, 0xA6, 0xAB, 0xF7, 0x15, 0x88, 0x09, 0xCF, 0x4F, 0x3C };
//IV array
extern const byte new_iv[100][16] = {{0xA5,0xEE,0x7C,0x26,0x8E,0xA2,0x8C,0xAD,0xE9,0x39,0x28,0x1C,0xE1,0x8C,0xE5,0x11},{0x8E,0x65,0x98,0x1F,0x59,0xC8,0x09,0xDB,0x35,0x06,0xB4,0x38,0xB0,0xD9,0xA9,0x70},{0x0D,0xC0,0xE2,0xB0,0x3B,0x32,0xC9,0x59,0xF4,0xDC,0xE4,0xD6,0x55,0x99,0x4C,0x08},{0xAF,0x5A,0x77,0x0F,0x82,0x4F,0xD6,0xA1,0x15,0xD0,0x92,0x97,0x0D,0xF4,0x0C,0x59},{0x7B,0x5A,0xF3,0x78,0xF0,0xAB,0x34,0xBE,0xB2,0x37,0x08,0x94,0x71,0x53,0xFC,0x66},{0xC2,0xAD,0xC9,0x2C,0x12,0x43,0x57,0xCA,0xD5,0x7C,0x9B,0x2B,0xB5,0xBA,0xFB,0x00},{0x68,0xC9,0xAB,0x44,0x13,0xB8,0xE1,0xA1,0x68,0x6D,0xC2,0xBC,0x9E,0x57,0x04,0x83},{0xA7,0x08,0x4C,0xD0,0xD9,0x64,0x6B,0xB9,0x66,0x99,0x68,0x42,0x54,0xC0,0xE0,0x1C},{0x86,0xAF,0x67,0xA9,0x00,0x3B,0x0D,0x95,0xF2,0x1A,0xE6,0x89,0x43,0xBE,0xD2,0xF1},{0x52,0xF3,0xDA,0x24,0xD4,0xCC,0xDD,0x29,0xC8,0x95,0x48,0x13,0x6A,0x5E,0x57,0xD4},{0xA5,0x9E,0x6C,0x81,0xE9,0x3C,0xB3,0x20,0x6B,0x3A,0x8B,0x82,0x0B,0x3A,0xA5,0x3B},{0x09,0xE6,0xD9,0x87,0x02,0x6C,0x55,0xC6,0xE7,0x17,0x09,0xE8,0x09,0x27,0x43,0xCB},{0x7E,0xF6,0x11,0xBC,0x2D,0xB8,0x92,0x86,0xFC,0x6A,0xD6,0x23,0x0F,0x5B,0x4E,0xD0},{0x33,0x4B,0x10,0x0D,0x97,0xC5,0xCE,0xA2,0xB6,0xDB,0x7B,0xCB,0x84,0x10,0x76,0x14},{0xD9,0x68,0xF3,0x88,0x6E,0xFA,0x51,0xE9,0x93,0xEB,0x68,0xE6,0xF4,0x2A,0x6B,0x70},{0x70,0x50,0x10,0xE1,0x38,0x8E,0x4F,0x2B,0x01,0xC8,0x90,0x3A,0x5E,0x78,0x28,0x12},{0xC0,0xEF,0x48,0x77,0x33,0xF7,0xBB,0xC3,0x58,0x70,0x47,0x2F,0xAF,0x36,0x95,0xF2},{0x1C,0x31,0x5B,0x89,0xE8,0xA4,0x49,0xD1,0xAD,0x4C,0x7C,0x70,0xC3,0x2B,0xCC,0xD8},{0x0F,0x8B,0xDA,0x48,0xA0,0xC2,0x8C,0x09,0x87,0xF6,0x04,0xA6,0xD0,0xD2,0x0E,0x12},{0x8A,0x6A,0xE3,0xC1,0x5A,0xD0,0x3E,0x2D,0xF6,0xD7,0x63,0x53,0x88,0x48,0xE9,0xAF},{0xE8,0xF9,0x77,0x27,0xAA,0x53,0xA4,0x7D,0x7B,0x9B,0x97,0xC1,0xC6,0xC6,0x71,0x08},{0x38,0x08,0x52,0x06,0xCD,0x48,0xD1,0x27,0x13,0xC2,0xFD,0x3D,0x28,0x4A,0xF4,0x93},{0x97,0x37,0x4B,0x2C,0xB7,0x15,0xD8,0x92,0xC4,0x82,0x8E,0xB9,0x85,0x29,0x52,0x6F},{0x5F,0x83,0x11,0xCC,0xC9,0xD7,0x09,0x06,0x98,0x20,0x9E,0x13,0x26,0xE2,0x01,0xCF},{0x40,0xC3,0x6F,0xE4,0x0E,0x24,0x58,0x0E,0x85,0x41,0x2F,0x2F,0x21,0x09,0xE0,0xAF},{0xB6,0xCA,0x34,0x90,0x02,0x97,0x69,0x58,0x81,0x78,0x9B,0x63,0xDC,0x92,0x74,0xCC},{0x05,0x1A,0x94,0x34,0x18,0x0A,0x66,0x96,0x43,0xCC,0xFA,0xD5,0x45,0x86,0x50,0xD4},{0xAD,0xCB,0xE6,0x5F,0x0D,0xA0,0x9B,0xDC,0x62,0x28,0x54,0x56,0x20,0x20,0xCA,0xCE},{0xCA,0x4A,0xC5,0x0A,0x62,0x5F,0x3B,0x7A,0x08,0x87,0x72,0xAF,0xB9,0x2B,0x91,0x24},{0xEA,0xF7,0x96,0x7E,0x84,0x48,0x1C,0x6E,0x5E,0x4D,0xD9,0xED,0x6D,0x08,0x83,0xCE},{0x8A,0xD1,0x6D,0xCF,0xBE,0xDB,0x22,0x9B,0x23,0xCA,0xF3,0x90,0x81,0xD1,0xF0,0xA6},{0xB9,0xE9,0x0D,0x6C,0x46,0x6E,0x0C,0xA4,0xC0,0x51,0x93,0xB5,0x14,0x3D,0xD9,0x7E},{0x98,0xAC,0xB7,0x53,0xBD,0x4B,0x86,0xF4,0xB3,0xAC,0xD4,0x48,0x87,0x6C,0x9A,0x77},{0x4F,0xDA,0x2D,0x6E,0x1C,0xF2,0xAA,0x24,0x90,0x02,0x6A,0x9E,0xF6,0xA2,0xF3,0x3F},{0xBB,0x14,0x59,0x39,0x71,0xD3,0x73,0xB1,0x3C,0x4C,0x86,0xAB,0x90,0xA5,0x0F,0x28},{0x6C,0xDA,0x65,0x6D,0xED,0x6F,0xCF,0x8B,0xF5,0x08,0x02,0x7A,0x2D,0xF6,0x4A,0x00},{0x6A,0x15,0x70,0x8D,0x30,0x54,0xBC,0x74,0x7D,0x74,0x3B,0xBB,0x3B,0x69,0x15,0x22},{0x2D,0x8A,0x93,0xE1,0x75,0xC6,0x26,0x72,0x62,0x9E,0xB5,0x6E,0x17,0x04,0xB8,0x5C},{0x1D,0x38,0xA6,0x90,0x39,0x4A,0x2E,0xE6,0x06,0x41,0xE1,0x96,0x79,0xA7,0xC4,0x47},{0x1B,0x96,0xB2,0x42,0xE9,0xCC,0x9A,0xD9,0x25,0x40,0x21,0x9C,0x0A,0xF4,0x84,0xC0},{0x29,0x86,0x36,0x19,0xD8,0x5E,0x59,0xC9,0xF4,0x0C,0x97,0x2F,0x63,0x17,0x03,0x9E},{0xDD,0x51,0xDB,0xC5,0x65,0x24,0xDA,0xAB,0x2A,0x84,0x00,0x36,0xF1,0x44,0x90,0x3E},{0x81,0x94,0xA8,0x68,0x1B,0x3C,0x93,0xA0,0xAF,0x1C,0xA4,0xB9,0xD2,0x68,0xEC,0x64},{0x97,0xB4,0xE9,0x95,0x2A,0x34,0x8A,0xE5,0x96,0xB6,0x29,0xD0,0xDB,0x52,0x79,0x76},{0x96,0xE4,0xDF,0xA1,0xBD,0xA3,0xEA,0x49,0xC9,0x4E,0x0B,0xF9,0xC8,0x38,0xC9,0x42},{0x15,0xD2,0x4C,0xD9,0x89,0x71,0x35,0xCD,0x96,0xBB,0x96,0x5D,0x04,0xF8,0xF4,0xB3},{0x6F,0x7D,0x80,0xF7,0x3F,0x4A,0xF7,0xC2,0xD1,0xA2,0xC0,0x60,0xAB,0x9E,0x04,0x75},{0xA4,0x07,0xC9,0xEE,0x28,0x8D,0xD2,0x09,0xFA,0x80,0x2B,0xD3,0x58,0x08,0xF4,0x73},{0x3E,0x13,0x08,0x6A,0xD3,0xAF,0x79,0xF4,0x11,0x4F,0x30,0x21,0x9C,0x88,0x21,0x56},{0xA7,0x4B,0x59,0x3D,0xEB,0x09,0x23,0x05,0x6B,0x0D,0x46,0x27,0xA5,0xAD,0x2E,0x63},{0xCA,0x62,0x0B,0x1C,0xEB,0xE6,0x11,0x3A,0x30,0x6A,0x62,0x15,0x6A,0x78,0xD1,0x7C},{0x35,0x03,0x32,0x27,0xB4,0xAD,0x26,0x6A,0xB6,0xDF,0x1B,0x8D,0x70,0x2A,0xE1,0x17},{0x02,0x06,0x57,0xA0,0x2E,0x0E,0xDD,0x8A,0x96,0x91,0x6A,0xA2,0x9C,0xB9,0xC5,0x0D},{0x6E,0x64,0x17,0x52,0x54,0x30,0x09,0xB7,0xF8,0xF6,0x7D,0x50,0x4C,0xF9,0x89,0x00},{0x73,0xB7,0xA7,0xE7,0xAB,0xE3,0x6A,0x19,0xC7,0x3E,0xBD,0x24,0x64,0x64,0x76,0xA5},{0xD2,0x61,0x3C,0x09,0xBD,0x75,0x6E,0x32,0xA8,0x4A,0x78,0x45,0xF2,0x5D,0x82,0x92},{0x17,0xB9,0xBC,0x77,0x61,0x15,0x55,0x69,0x8F,0xB5,0xAD,0xA1,0x24,0xD2,0xE6,0x40},{0xE9,0x9E,0x43,0x44,0xDA,0x14,0x40,0xD7,0x18,0x6F,0xD9,0xBD,0x26,0xCE,0xA2,0x76},{0x0F,0x91,0x42,0x5A,0x42,0x49,0x3F,0x10,0x7C,0x53,0x51,0x17,0x2E,0xC7,0x0A,0xB3},{0xCF,0x20,0x76,0x34,0x70,0xE0,0xC2,0x59,0x54,0xE7,0x62,0xDF,0x45,0x6D,0x42,0x39},{0xB7,0x41,0x9B,0x0B,0x44,0x0E,0xDB,0xD6,0x14,0x75,0x2A,0xD2,0x33,0x1B,0xB6,0xA5},{0x5D,0x14,0xF2,0x57,0x57,0x76,0x99,0xF6,0x45,0xEB,0xCD,0x6B,0xB1,0xB7,0x48,0xC7},{0x49,0xCC,0x36,0x9E,0xE9,0x27,0xB9,0xCD,0xB0,0x51,0x33,0xBB,0xB2,0xD8,0x6E,0x21},{0xC4,0xF2,0x12,0x3B,0x7D,0x34,0x7C,0xF9,0xEA,0xE5,0x24,0xD9,0x3F,0x70,0xB2,0x95},{0x93,0x0C,0x8E,0xC1,0xA7,0x31,0x2A,0x58,0x6D,0x5E,0xE2,0x37,0x08,0xD5,0x94,0x9F},{0x1F,0xB9,0x7C,0x6D,0x26,0x45,0x66,0x6C,0x36,0x34,0x5F,0x33,0x62,0x40,0x59,0x05},{0x21,0xD4,0xD5,0xC4,0xF4,0x80,0xF6,0x22,0x25,0xE7,0x0D,0x59,0xC5,0x45,0xE5,0x2B},{0x07,0x72,0x15,0x63,0xD4,0x68,0x05,0x87,0x99,0x6D,0xC7,0x7C,0xCC,0xE6,0x8F,0x57},{0x84,0x15,0x04,0xDD,0xA5,0xE8,0x37,0xAC,0x8B,0xA7,0x1B,0xE2,0x1C,0x29,0x5A,0x12},{0xDC,0x0D,0xF8,0x69,0x3A,0xBA,0x47,0xC7,0x0A,0x19,0x43,0x38,0xEA,0xF5,0xCE,0x67},{0xCA,0x1C,0xF5,0x9A,0xBF,0x17,0xEC,0xEE,0x10,0xEE,0xD5,0x24,0x11,0x4B,0xA4,0x20},{0x51,0x3C,0x86,0x8A,0xF8,0xD0,0xD0,0x6E,0xEB,0x6B,0x46,0x3B,0x65,0xD5,0x00,0xBA},{0xE7,0x44,0xC5,0x84,0x41,0x85,0x88,0xE6,0x13,0xCC,0xBD,0x45,0xCB,0xBC,0xBD,0x01},{0x79,0xC9,0x5D,0xED,0xC5,0x6F,0xB6,0x91,0x95,0xDA,0x57,0x31,0xAA,0x00,0x1A,0xA2},{0x69,0x66,0xD4,0x56,0x13,0x2D,0xCE,0xE8,0xA5,0xBF,0x21,0x3A,0x9E,0x05,0x12,0xE8},{0xE8,0xDA,0xF1,0x5E,0x65,0x89,0x30,0x2A,0x76,0x5B,0xD9,0xCB,0xD5,0x70,0xEF,0xD2},{0xBF,0xCB,0xE1,0xE7,0xB7,0xE3,0x75,0x6A,0xFC,0x37,0x4A,0x18,0xB4,0x3B,0x3C,0xA6},{0xEE,0x52,0x64,0x7B,0x49,0x84,0x5C,0x54,0xB3,0x31,0xD1,0x0C,0x89,0x03,0xFB,0x85},{0x9D,0xF6,0xC7,0x08,0x78,0x43,0x52,0x68,0x1B,0xD8,0xD7,0x8C,0xAA,0xB0,0x1F,0x6D},{0xA2,0x3A,0x3A,0x66,0x9D,0x04,0xA3,0x8B,0x41,0xD4,0xBE,0x7B,0x18,0xF1,0xCA,0xE4},{0x54,0x99,0xD4,0x51,0x55,0x27,0x98,0x96,0x16,0xEA,0x83,0xC5,0x17,0x1A,0x91,0x90},{0x56,0xD2,0xBB,0x71,0x74,0x51,0xF4,0xFB,0x37,0xD4,0x25,0x7C,0x7A,0x4F,0x74,0x84},{0x0A,0x48,0x97,0x23,0xCD,0x31,0xC8,0x77,0x10,0x45,0xB2,0xC7,0xCB,0x55,0x7B,0x94},{0x93,0x7B,0x32,0x20,0x54,0x0E,0x7F,0x59,0x36,0xAE,0x66,0x38,0x32,0x57,0x53,0x2D},{0x75,0x8A,0x54,0x22,0xB1,0xE9,0x98,0x1A,0xFA,0x5B,0x25,0x1D,0x7E,0xD4,0x9D,0x5F},{0x76,0x07,0xAE,0xC7,0xB6,0xEE,0x25,0xF8,0xE2,0x53,0x0B,0xBB,0x73,0xC0,0xA5,0x02},{0x16,0xF9,0x21,0xC1,0x94,0xC9,0x7E,0x93,0x4B,0x97,0x92,0x8F,0xAB,0x15,0x9A,0xE3},{0x9A,0x8A,0x17,0x3B,0x79,0xA1,0xAC,0x83,0xEC,0xF5,0x9E,0x47,0xF4,0x06,0x30,0xCD},{0x5E,0xEC,0x6F,0x79,0xDE,0x46,0x6D,0x1C,0x56,0x16,0xF6,0x37,0x21,0xA5,0x0B,0xF1},{0x04,0x96,0xEB,0x8D,0x71,0xD5,0xAE,0x73,0x33,0x59,0x09,0x77,0x0F,0xD1,0x11,0x86},{0x03,0x60,0x58,0xAE,0x51,0xD8,0x3A,0xEC,0x18,0x2D,0x12,0x2E,0x0E,0x3D,0x8A,0x1D},{0x49,0x6C,0x77,0x5F,0xBB,0x47,0xB3,0x15,0x64,0x3D,0xD1,0x03,0xCB,0xA5,0xC1,0x71},{0x1E,0x44,0x65,0x88,0xC9,0xC4,0xDF,0xDB,0x1D,0xC9,0xE9,0xBA,0x40,0x3E,0x01,0x21},{0x86,0xB0,0x1E,0x5A,0x22,0xE3,0x0D,0x1B,0x51,0x00,0x04,0xED,0x9B,0x8A,0x7D,0x3F},{0xF6,0xBA,0x6B,0x32,0x50,0x17,0x88,0xBB,0x0F,0x4B,0x28,0x15,0xBF,0xC1,0x66,0xA9},{0xEF,0x10,0x33,0x02,0x8B,0x9A,0x63,0xAF,0x32,0x6A,0x6D,0x87,0xE4,0xD2,0x2A,0x77},{0xDC,0x10,0xE1,0x01,0x04,0x53,0x8F,0xAE,0xE4,0xA2,0xA9,0x6B,0x8D,0x6F,0x56,0x73},{0x01,0x80,0x5A,0x85,0x60,0x1A,0x47,0xD8,0xDE,0xBA,0x92,0x6F,0x19,0xB0,0x38,0x6C},{0x14,0xD9,0xA6,0x84,0xAB,0x3C,0x52,0xA6,0x22,0xD2,0xBE,0xFC,0x39,0x71,0xB8,0x94},{0x3E,0x18,0x47,0x76,0xEF,0x21,0x6C,0xDD,0xEE,0x06,0xB7,0x27,0x65,0x99,0xD5,0x6E}};