/*
	z3ResEx
	Written by x1nixmzeng

	keys.h
		Various keys extracted from the game clients
		
	NOTES
		These keys are tested using brute force
		Each publisher/region uses a different key
*/

#ifndef KEYS_H
#define KEYS_H

struct z3KeyDefinition
{
	unsigned char	*Data;
	const char		*Desc;
	const char		*Region;
};

#define DEFINE_Z3KEY_FULL( desc, data, region ) \
	{ data, desc, region }
#define DEFINE_Z3KEY( desc, data ) \
	{ data, desc, "" }
#define COUNT_METHODS( methodList ) \
	( sizeof( methodList ) / sizeof( methodList[ 0 ] ) )

#pragma region Keys for early clients

const unsigned int KeyLength1( 202 );

/*
	RaiderZ keys
		r32579	2F56493F59B78655FBCFEA894DE92D63	Perfect World Alpha
		r32732	A565DE84608B3FD16AAA2DB00EFFEA22	PMANG
		r34748	86FCEE748A4421FCBE0710EA1B235124	??
		r34991	F42E110E4203A24DB6BAE3B2E633570B	??
		r35358	0BC63ECE5B9C6BB56F959CF38943F920	Perfect World CBT
		r36163	EBFA48906C484DB5B412EB29D6BB20CA	Perfect World Stress Test
		r36249	BAB055DE137A9BCDD7F4E6D05D10BD0A	Gameforge OBT
		r36264	71F82E8D4DB80458CA00F8177897C6DF	Perfect World OBT
*/
unsigned char Z3_KEY_RAIDERZ_KR_NA[ KeyLength1 ] =
{
	0x30, 0x81, 0xC7, 0x02, 0x01, 0x00, 0x30, 0x81,
	0xA4, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D,
	0x02, 0x01, 0x30, 0x81, 0x98, 0x02, 0x01, 0x01,
	0x30, 0x20, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE,
	0x3D, 0x01, 0x01, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0xC7, 0xAD, 0x95, 0xB3, 0xD8, 0x13, 0x95, 0x15,
	0x62, 0x0F, 0x30, 0x2C, 0x04, 0x14, 0x34, 0x0E,
	0x7B, 0xE2, 0xA2, 0x80, 0xEB, 0x74, 0xE2, 0xBE,
	0x61, 0xBA, 0xDA, 0x74, 0x5D, 0x97, 0xE8, 0xF7,
	0xC3, 0x00, 0x04, 0x14, 0x1E, 0x58, 0x9A, 0x85,
	0x95, 0x42, 0x34, 0x12, 0x13, 0x4F, 0xAA, 0x2D,
	0xBD, 0xEC, 0x95, 0xC8, 0xD8, 0x67, 0x5E, 0x58,
	0x04, 0x29, 0x04, 0xBE, 0xD5, 0xAF, 0x16, 0xEA,
	0x3F, 0x6A, 0x4F, 0x62, 0x93, 0x8C, 0x46, 0x31,
	0xEB, 0x5A, 0xF7, 0xBD, 0xBC, 0xDB, 0xC3, 0x16,
	0x67, 0xCB, 0x47, 0x7A, 0x1A, 0x8E, 0xC3, 0x38,
	0xF9, 0x47, 0x41, 0x66, 0x9C, 0x97, 0x63, 0x16,
	0xDA, 0x63, 0x21, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0x59, 0x91, 0xD4, 0x50, 0x29, 0x40, 0x9E, 0x60,
	0xFC, 0x09, 0x02, 0x01, 0x01, 0x04, 0x1B, 0x30,
	0x19, 0x02, 0x01, 0x01, 0x04, 0x14, 0x39, 0x79,
	0x0A, 0x0F, 0xE0, 0x7F, 0x5C, 0xD0, 0x67, 0x0A,
	0xEC, 0x57, 0x65, 0x75, 0x6C, 0x5B, 0xEB, 0xC0,
	0x29, 0x8B 
};


/*
	RaiderZ keys
		r35337	8E405793A58A8A25EC45D1FFC0F860E1	Gameforge CBT
		r35608	60D16239B0DBC4E2F4E6774F69A5686E	PMANG Ep1
		r36373	32FD9047CE5A614AB130B6ED2BDAD0B9	PMANG
*/
unsigned char Z3_KEY_RAIDERZ_EU[ KeyLength1 ] =
{
	0x30, 0x81, 0xC7, 0x02, 0x01, 0x00, 0x30, 0x81,
	0xA4, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D,
	0x02, 0x01, 0x30, 0x81, 0x98, 0x02, 0x01, 0x01,
	0x30, 0x20, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE,
	0x3D, 0x01, 0x01, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0xC7, 0xAD, 0x95, 0xB3, 0xD8, 0x13, 0x95, 0x15,
	0x62, 0x0F, 0x30, 0x2C, 0x04, 0x14, 0x34, 0x0E,
	0x7B, 0xE2, 0xA2, 0x80, 0xEB, 0x74, 0xE2, 0xBE,
	0x61, 0xBA, 0xDA, 0x74, 0x5D, 0x97, 0xE8, 0xF7,
	0xC3, 0x00, 0x04, 0x14, 0x1E, 0x58, 0x9A, 0x85,
	0x95, 0x42, 0x34, 0x12, 0x13, 0x4F, 0xAA, 0x2D,
	0xBD, 0xEC, 0x95, 0xC8, 0xD8, 0x67, 0x5E, 0x58,
	0x04, 0x29, 0x04, 0xBE, 0xD5, 0xAF, 0x16, 0xEA,
	0x3F, 0x6A, 0x4F, 0x62, 0x93, 0x8C, 0x46, 0x31,
	0xEB, 0x5A, 0xF7, 0xBD, 0xBC, 0xDB, 0xC3, 0x16,
	0x67, 0xCB, 0x47, 0x7A, 0x1A, 0x8E, 0xC3, 0x38,
	0xF9, 0x47, 0x41, 0x66, 0x9C, 0x97, 0x63, 0x16,
	0xDA, 0x63, 0x21, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0x59, 0x91, 0xD4, 0x50, 0x29, 0x40, 0x9E, 0x60,
	0xFC, 0x09, 0x02, 0x01, 0x01, 0x04, 0x1B, 0x30,
	0x19, 0x02, 0x01, 0x01, 0x04, 0x14, 0xC0, 0x07,
	0x74, 0x25, 0x13, 0xAA, 0x00, 0x07, 0x2A, 0xDC,
	0x22, 0x1C, 0xF9, 0xFB, 0x25, 0x8F, 0x46, 0xB0,
	0xA7, 0x96
};


/*
	GunZ2 Keys
		r13226	5F6D1AC14E5553317D231262356B7D32	Netmarble VIP/CBT
		r18687	D54651466D4AA086BA82AE807AFAC731	Netmarble CBT
		r25565	F1A7D95319DC217B3F5C326E94047953	Netmarble GunZ2 CBT2
		r30001	15A00851A1E9E0AAFAE44EDB105DDB22	Netmarble GunZ2 CBT (2013)
*/
unsigned char Z3_KEY_GUNZ2_KR[ KeyLength1 ] =
{
	0x30, 0x81, 0xC7, 0x02, 0x01, 0x00, 0x30, 0x81,
	0xA4, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D,
	0x02, 0x01, 0x30, 0x81, 0x98, 0x02, 0x01, 0x01,
	0x30, 0x20, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE,
	0x3D, 0x01, 0x01, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0xC7, 0xAD, 0x95, 0xB3, 0xD8, 0x13, 0x95, 0x15,
	0x62, 0x0F, 0x30, 0x2C, 0x04, 0x14, 0x34, 0x0E,
	0x7B, 0xE2, 0xA2, 0x80, 0xEB, 0x74, 0xE2, 0xBE,
	0x61, 0xBA, 0xDA, 0x74, 0x5D, 0x97, 0xE8, 0xF7,
	0xC3, 0x00, 0x04, 0x14, 0x1E, 0x58, 0x9A, 0x85,
	0x95, 0x42, 0x34, 0x12, 0x13, 0x4F, 0xAA, 0x2D,
	0xBD, 0xEC, 0x95, 0xC8, 0xD8, 0x67, 0x5E, 0x58,
	0x04, 0x29, 0x04, 0xBE, 0xD5, 0xAF, 0x16, 0xEA,
	0x3F, 0x6A, 0x4F, 0x62, 0x93, 0x8C, 0x46, 0x31,
	0xEB, 0x5A, 0xF7, 0xBD, 0xBC, 0xDB, 0xC3, 0x16,
	0x67, 0xCB, 0x47, 0x7A, 0x1A, 0x8E, 0xC3, 0x38,
	0xF9, 0x47, 0x41, 0x66, 0x9C, 0x97, 0x63, 0x16,
	0xDA, 0x63, 0x21, 0x02, 0x15, 0x00, 0xE9, 0x5E,
	0x4A, 0x5F, 0x73, 0x70, 0x59, 0xDC, 0x60, 0xDF,
	0x59, 0x91, 0xD4, 0x50, 0x29, 0x40, 0x9E, 0x60,
	0xFC, 0x09, 0x02, 0x01, 0x01, 0x04, 0x1B, 0x30,
	0x19, 0x02, 0x01, 0x01, 0x04, 0x14, 0x3F, 0xF0,
	0x4B, 0xFF, 0x19, 0xBD, 0xEC, 0x93, 0x6D, 0x33,
	0x27, 0xDE, 0x21, 0x55, 0x21, 0xBF, 0x5C, 0x95,
	0x67, 0x0B 
};

#pragma endregion

#pragma region Keys for current clients

const unsigned int KeyLength2( 515 );

/*
	GunZ2 Keys (updated fileindex method)
		r33005		Feb 19th 2013
		r33297		Feb 25th 2013
*/

unsigned char Z3_KEY_GUNZ2_METHOD2[ KeyLength2 ] =
{
    0x30, 0x82, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x30,
    0x82, 0x01, 0xAF, 0x06, 0x07, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x02, 0x01, 0x30, 0x82, 0x01, 0xA2,
    0x02, 0x01, 0x01, 0x30, 0x4C, 0x06, 0x07, 0x2A,
    0x86, 0x48, 0xCE, 0x3D, 0x01, 0x01, 0x02, 0x41,
    0x00, 0xAA, 0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4,
    0x8B, 0x3F, 0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC,
    0x07, 0xCB, 0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2,
    0x0E, 0xD6, 0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08,
    0x71, 0x7D, 0x4D, 0x9B, 0x00, 0x9B, 0xC6, 0x68,
    0x42, 0xAE, 0xCD, 0xA1, 0x2A, 0xE6, 0xA3, 0x80,
    0xE6, 0x28, 0x81, 0xFF, 0x2F, 0x2D, 0x82, 0xC6,
    0x85, 0x28, 0xAA, 0x60, 0x56, 0x58, 0x3A, 0x48,
    0xF3, 0x30, 0x81, 0x84, 0x04, 0x40, 0x78, 0x30,
    0xA3, 0x31, 0x8B, 0x60, 0x3B, 0x89, 0xE2, 0x32,
    0x71, 0x45, 0xAC, 0x23, 0x4C, 0xC5, 0x94, 0xCB,
    0xDD, 0x8D, 0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34,
    0x41, 0xCA, 0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED,
    0x5D, 0x5A, 0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E,
    0xF1, 0xC9, 0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11,
    0x17, 0xA7, 0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1,
    0xAC, 0x4D, 0x77, 0xFC, 0x94, 0xCA, 0x04, 0x40,
    0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34, 0x41, 0xCA,
    0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED, 0x5D, 0x5A,
    0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E, 0xF1, 0xC9,
    0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11, 0x17, 0xA7,
    0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1, 0xAC, 0x4D,
    0x77, 0xFC, 0x94, 0xCA, 0xDC, 0x08, 0x3E, 0x67,
    0x98, 0x40, 0x50, 0xB7, 0x5E, 0xBA, 0xE5, 0xDD,
    0x28, 0x09, 0xBD, 0x63, 0x80, 0x16, 0xF7, 0x23,
    0x04, 0x81, 0x81, 0x04, 0x81, 0xAE, 0xE4, 0xBD,
    0xD8, 0x2E, 0xD9, 0x64, 0x5A, 0x21, 0x32, 0x2E,
    0x9C, 0x4C, 0x6A, 0x93, 0x85, 0xED, 0x9F, 0x70,
    0xB5, 0xD9, 0x16, 0xC1, 0xB4, 0x3B, 0x62, 0xEE,
    0xF4, 0xD0, 0x09, 0x8E, 0xFF, 0x3B, 0x1F, 0x78,
    0xE2, 0xD0, 0xD4, 0x8D, 0x50, 0xD1, 0x68, 0x7B,
    0x93, 0xB9, 0x7D, 0x5F, 0x7C, 0x6D, 0x50, 0x47,
    0x40, 0x6A, 0x5E, 0x68, 0x8B, 0x35, 0x22, 0x09,
    0xBC, 0xB9, 0xF8, 0x22, 0x7D, 0xDE, 0x38, 0x5D,
    0x56, 0x63, 0x32, 0xEC, 0xC0, 0xEA, 0xBF, 0xA9,
    0xCF, 0x78, 0x22, 0xFD, 0xF2, 0x09, 0xF7, 0x00,
    0x24, 0xA5, 0x7B, 0x1A, 0xA0, 0x00, 0xC5, 0x5B,
    0x88, 0x1F, 0x81, 0x11, 0xB2, 0xDC, 0xDE, 0x49,
    0x4A, 0x5F, 0x48, 0x5E, 0x5B, 0xCA, 0x4B, 0xD8,
    0x8A, 0x27, 0x63, 0xAE, 0xD1, 0xCA, 0x2B, 0x2F,
    0xA8, 0xF0, 0x54, 0x06, 0x78, 0xCD, 0x1E, 0x0F,
    0x3A, 0xD8, 0x08, 0x92, 0x02, 0x41, 0x00, 0xAA,
    0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4, 0x8B, 0x3F,
    0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC, 0x07, 0xCB,
    0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2, 0x0E, 0xD6,
    0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08, 0x70, 0x55,
    0x3E, 0x5C, 0x41, 0x4C, 0xA9, 0x26, 0x19, 0x41,
    0x86, 0x61, 0x19, 0x7F, 0xAC, 0x10, 0x47, 0x1D,
    0xB1, 0xD3, 0x81, 0x08, 0x5D, 0xDA, 0xDD, 0xB5,
    0x87, 0x96, 0x82, 0x9C, 0xA9, 0x00, 0x69, 0x02,
    0x01, 0x01, 0x04, 0x47, 0x30, 0x45, 0x02, 0x01,
    0x01, 0x04, 0x40, 0x1A, 0xD1, 0x7F, 0x7B, 0xE0,
    0x00, 0x94, 0x67, 0xC7, 0xD1, 0xF2, 0x8D, 0x5D,
    0x25, 0x4C, 0xC0, 0x16, 0x73, 0x8C, 0x72, 0x72,
    0xAB, 0x2C, 0x7E, 0xB9, 0xD6, 0x16, 0xF4, 0x12,
    0x08, 0xAB, 0x0F, 0x54, 0x4F, 0x3E, 0x91, 0x82,
    0x3C, 0x62, 0x43, 0xA5, 0x34, 0x75, 0x79, 0xE4,
    0x91, 0x1C, 0x61, 0x49, 0x1F, 0xAA, 0x69, 0x11,
    0x50, 0x91, 0x5E, 0x9C, 0xA4, 0xD6, 0x34, 0x4F,
    0xCF, 0xDE, 0xD0 
};

/*
	EU RaiderZ Keys (updated fileindex method)
		r37874		93DBC10A13E5DE9F7349DE14AB50A250	Apr 2nd 2013
*/

unsigned char Z3_KEY_EURAIDERZ_METHOD2[ KeyLength2 ] =
{
    0x30, 0x82, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x30,
    0x82, 0x01, 0xAF, 0x06, 0x07, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x02, 0x01, 0x30, 0x82, 0x01, 0xA2,
    0x02, 0x01, 0x01, 0x30, 0x4C, 0x06, 0x07, 0x2A,
    0x86, 0x48, 0xCE, 0x3D, 0x01, 0x01, 0x02, 0x41,
    0x00, 0xAA, 0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4,
    0x8B, 0x3F, 0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC,
    0x07, 0xCB, 0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2,
    0x0E, 0xD6, 0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08,
    0x71, 0x7D, 0x4D, 0x9B, 0x00, 0x9B, 0xC6, 0x68,
    0x42, 0xAE, 0xCD, 0xA1, 0x2A, 0xE6, 0xA3, 0x80,
    0xE6, 0x28, 0x81, 0xFF, 0x2F, 0x2D, 0x82, 0xC6,
    0x85, 0x28, 0xAA, 0x60, 0x56, 0x58, 0x3A, 0x48,
    0xF3, 0x30, 0x81, 0x84, 0x04, 0x40, 0x78, 0x30,
    0xA3, 0x31, 0x8B, 0x60, 0x3B, 0x89, 0xE2, 0x32,
    0x71, 0x45, 0xAC, 0x23, 0x4C, 0xC5, 0x94, 0xCB,
    0xDD, 0x8D, 0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34,
    0x41, 0xCA, 0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED,
    0x5D, 0x5A, 0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E,
    0xF1, 0xC9, 0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11,
    0x17, 0xA7, 0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1,
    0xAC, 0x4D, 0x77, 0xFC, 0x94, 0xCA, 0x04, 0x40,
    0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34, 0x41, 0xCA,
    0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED, 0x5D, 0x5A,
    0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E, 0xF1, 0xC9,
    0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11, 0x17, 0xA7,
    0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1, 0xAC, 0x4D,
    0x77, 0xFC, 0x94, 0xCA, 0xDC, 0x08, 0x3E, 0x67,
    0x98, 0x40, 0x50, 0xB7, 0x5E, 0xBA, 0xE5, 0xDD,
    0x28, 0x09, 0xBD, 0x63, 0x80, 0x16, 0xF7, 0x23,
    0x04, 0x81, 0x81, 0x04, 0x81, 0xAE, 0xE4, 0xBD,
    0xD8, 0x2E, 0xD9, 0x64, 0x5A, 0x21, 0x32, 0x2E,
    0x9C, 0x4C, 0x6A, 0x93, 0x85, 0xED, 0x9F, 0x70,
    0xB5, 0xD9, 0x16, 0xC1, 0xB4, 0x3B, 0x62, 0xEE,
    0xF4, 0xD0, 0x09, 0x8E, 0xFF, 0x3B, 0x1F, 0x78,
    0xE2, 0xD0, 0xD4, 0x8D, 0x50, 0xD1, 0x68, 0x7B,
    0x93, 0xB9, 0x7D, 0x5F, 0x7C, 0x6D, 0x50, 0x47,
    0x40, 0x6A, 0x5E, 0x68, 0x8B, 0x35, 0x22, 0x09,
    0xBC, 0xB9, 0xF8, 0x22, 0x7D, 0xDE, 0x38, 0x5D,
    0x56, 0x63, 0x32, 0xEC, 0xC0, 0xEA, 0xBF, 0xA9,
    0xCF, 0x78, 0x22, 0xFD, 0xF2, 0x09, 0xF7, 0x00,
    0x24, 0xA5, 0x7B, 0x1A, 0xA0, 0x00, 0xC5, 0x5B,
    0x88, 0x1F, 0x81, 0x11, 0xB2, 0xDC, 0xDE, 0x49,
    0x4A, 0x5F, 0x48, 0x5E, 0x5B, 0xCA, 0x4B, 0xD8,
    0x8A, 0x27, 0x63, 0xAE, 0xD1, 0xCA, 0x2B, 0x2F,
    0xA8, 0xF0, 0x54, 0x06, 0x78, 0xCD, 0x1E, 0x0F,
    0x3A, 0xD8, 0x08, 0x92, 0x02, 0x41, 0x00, 0xAA,
    0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4, 0x8B, 0x3F,
    0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC, 0x07, 0xCB,
    0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2, 0x0E, 0xD6,
    0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08, 0x70, 0x55,
    0x3E, 0x5C, 0x41, 0x4C, 0xA9, 0x26, 0x19, 0x41,
    0x86, 0x61, 0x19, 0x7F, 0xAC, 0x10, 0x47, 0x1D,
    0xB1, 0xD3, 0x81, 0x08, 0x5D, 0xDA, 0xDD, 0xB5,
    0x87, 0x96, 0x82, 0x9C, 0xA9, 0x00, 0x69, 0x02,
    0x01, 0x01, 0x04, 0x47, 0x30, 0x45, 0x02, 0x01,
    0x01, 0x04, 0x40, 0x57, 0x69, 0x00, 0x3A, 0xBF,
    0x74, 0x0D, 0x1C, 0xC2, 0x76, 0xB7, 0x5B, 0x41,
    0x58, 0x0A, 0xD7, 0x71, 0xB2, 0xBF, 0xD8, 0xC7,
    0x40, 0x38, 0x3B, 0x81, 0x28, 0xD3, 0xD3, 0xD9,
    0x0F, 0xE9, 0xC5, 0x86, 0x4F, 0xD5, 0x48, 0x69,
    0xBC, 0x87, 0x17, 0x1C, 0xD2, 0xF7, 0xF6, 0x79,
    0xD0, 0xCB, 0x9B, 0xFB, 0x05, 0x02, 0x66, 0xCF,
    0xEC, 0xC4, 0x61, 0x4B, 0x61, 0x89, 0x60, 0x5C,
    0x3B, 0x9C, 0xC3 
};

/*
	NA RaiderZ Keys (updated fileindex method)
		r37891		937699D841CFCAAB584732C93FF5293B	Apr 2013
*/

unsigned char Z3_KEY_NARAIDERZ_METHOD2[ KeyLength2 ] =
{
    0x30, 0x82, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x30,
    0x82, 0x01, 0xAF, 0x06, 0x07, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x02, 0x01, 0x30, 0x82, 0x01, 0xA2,
    0x02, 0x01, 0x01, 0x30, 0x4C, 0x06, 0x07, 0x2A,
    0x86, 0x48, 0xCE, 0x3D, 0x01, 0x01, 0x02, 0x41,
    0x00, 0xAA, 0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4,
    0x8B, 0x3F, 0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC,
    0x07, 0xCB, 0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2,
    0x0E, 0xD6, 0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08,
    0x71, 0x7D, 0x4D, 0x9B, 0x00, 0x9B, 0xC6, 0x68,
    0x42, 0xAE, 0xCD, 0xA1, 0x2A, 0xE6, 0xA3, 0x80,
    0xE6, 0x28, 0x81, 0xFF, 0x2F, 0x2D, 0x82, 0xC6,
    0x85, 0x28, 0xAA, 0x60, 0x56, 0x58, 0x3A, 0x48,
    0xF3, 0x30, 0x81, 0x84, 0x04, 0x40, 0x78, 0x30,
    0xA3, 0x31, 0x8B, 0x60, 0x3B, 0x89, 0xE2, 0x32,
    0x71, 0x45, 0xAC, 0x23, 0x4C, 0xC5, 0x94, 0xCB,
    0xDD, 0x8D, 0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34,
    0x41, 0xCA, 0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED,
    0x5D, 0x5A, 0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E,
    0xF1, 0xC9, 0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11,
    0x17, 0xA7, 0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1,
    0xAC, 0x4D, 0x77, 0xFC, 0x94, 0xCA, 0x04, 0x40,
    0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34, 0x41, 0xCA,
    0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED, 0x5D, 0x5A,
    0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E, 0xF1, 0xC9,
    0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11, 0x17, 0xA7,
    0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1, 0xAC, 0x4D,
    0x77, 0xFC, 0x94, 0xCA, 0xDC, 0x08, 0x3E, 0x67,
    0x98, 0x40, 0x50, 0xB7, 0x5E, 0xBA, 0xE5, 0xDD,
    0x28, 0x09, 0xBD, 0x63, 0x80, 0x16, 0xF7, 0x23,
    0x04, 0x81, 0x81, 0x04, 0x81, 0xAE, 0xE4, 0xBD,
    0xD8, 0x2E, 0xD9, 0x64, 0x5A, 0x21, 0x32, 0x2E,
    0x9C, 0x4C, 0x6A, 0x93, 0x85, 0xED, 0x9F, 0x70,
    0xB5, 0xD9, 0x16, 0xC1, 0xB4, 0x3B, 0x62, 0xEE,
    0xF4, 0xD0, 0x09, 0x8E, 0xFF, 0x3B, 0x1F, 0x78,
    0xE2, 0xD0, 0xD4, 0x8D, 0x50, 0xD1, 0x68, 0x7B,
    0x93, 0xB9, 0x7D, 0x5F, 0x7C, 0x6D, 0x50, 0x47,
    0x40, 0x6A, 0x5E, 0x68, 0x8B, 0x35, 0x22, 0x09,
    0xBC, 0xB9, 0xF8, 0x22, 0x7D, 0xDE, 0x38, 0x5D,
    0x56, 0x63, 0x32, 0xEC, 0xC0, 0xEA, 0xBF, 0xA9,
    0xCF, 0x78, 0x22, 0xFD, 0xF2, 0x09, 0xF7, 0x00,
    0x24, 0xA5, 0x7B, 0x1A, 0xA0, 0x00, 0xC5, 0x5B,
    0x88, 0x1F, 0x81, 0x11, 0xB2, 0xDC, 0xDE, 0x49,
    0x4A, 0x5F, 0x48, 0x5E, 0x5B, 0xCA, 0x4B, 0xD8,
    0x8A, 0x27, 0x63, 0xAE, 0xD1, 0xCA, 0x2B, 0x2F,
    0xA8, 0xF0, 0x54, 0x06, 0x78, 0xCD, 0x1E, 0x0F,
    0x3A, 0xD8, 0x08, 0x92, 0x02, 0x41, 0x00, 0xAA,
    0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4, 0x8B, 0x3F,
    0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC, 0x07, 0xCB,
    0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2, 0x0E, 0xD6,
    0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08, 0x70, 0x55,
    0x3E, 0x5C, 0x41, 0x4C, 0xA9, 0x26, 0x19, 0x41,
    0x86, 0x61, 0x19, 0x7F, 0xAC, 0x10, 0x47, 0x1D,
    0xB1, 0xD3, 0x81, 0x08, 0x5D, 0xDA, 0xDD, 0xB5,
    0x87, 0x96, 0x82, 0x9C, 0xA9, 0x00, 0x69, 0x02,
    0x01, 0x01, 0x04, 0x47, 0x30, 0x45, 0x02, 0x01,
    0x01, 0x04, 0x40, 0x7F, 0xA7, 0x3C, 0xD5, 0x21,
    0xD9, 0xC2, 0xC6, 0x8E, 0xAB, 0x34, 0x64, 0xEF,
    0x9C, 0xF2, 0xD6, 0x39, 0x8C, 0xC7, 0xD2, 0xE1,
    0x84, 0xC5, 0xA5, 0x9B, 0x78, 0xD9, 0xD9, 0xFC,
    0xBA, 0x57, 0x9F, 0xBE, 0x43, 0xE0, 0x92, 0x83,
    0x03, 0x51, 0xEB, 0xAF, 0x4F, 0x4A, 0x27, 0x64,
    0x8B, 0xB5, 0xFD, 0xA0, 0xAE, 0x57, 0x5E, 0x18,
    0x4F, 0x9F, 0xB4, 0xDB, 0xE2, 0x03, 0x14, 0x22,
    0x5E, 0x72, 0x9D 
};

/*
	JP RaiderZ Keys (updated fileindex method)
		r38196		71BB22FBAEC735C6E8974A0136FAC3A0	Apr 25th 2013
*/

unsigned char Z3_KEY_JPRAIDERZ_METHOD2[ KeyLength2 ] =
{
    0x30, 0x82, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x30,
    0x82, 0x01, 0xAF, 0x06, 0x07, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x02, 0x01, 0x30, 0x82, 0x01, 0xA2,
    0x02, 0x01, 0x01, 0x30, 0x4C, 0x06, 0x07, 0x2A,
    0x86, 0x48, 0xCE, 0x3D, 0x01, 0x01, 0x02, 0x41,
    0x00, 0xAA, 0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4,
    0x8B, 0x3F, 0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC,
    0x07, 0xCB, 0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2,
    0x0E, 0xD6, 0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08,
    0x71, 0x7D, 0x4D, 0x9B, 0x00, 0x9B, 0xC6, 0x68,
    0x42, 0xAE, 0xCD, 0xA1, 0x2A, 0xE6, 0xA3, 0x80,
    0xE6, 0x28, 0x81, 0xFF, 0x2F, 0x2D, 0x82, 0xC6,
    0x85, 0x28, 0xAA, 0x60, 0x56, 0x58, 0x3A, 0x48,
    0xF3, 0x30, 0x81, 0x84, 0x04, 0x40, 0x78, 0x30,
    0xA3, 0x31, 0x8B, 0x60, 0x3B, 0x89, 0xE2, 0x32,
    0x71, 0x45, 0xAC, 0x23, 0x4C, 0xC5, 0x94, 0xCB,
    0xDD, 0x8D, 0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34,
    0x41, 0xCA, 0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED,
    0x5D, 0x5A, 0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E,
    0xF1, 0xC9, 0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11,
    0x17, 0xA7, 0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1,
    0xAC, 0x4D, 0x77, 0xFC, 0x94, 0xCA, 0x04, 0x40,
    0x3D, 0xF9, 0x16, 0x10, 0xA8, 0x34, 0x41, 0xCA,
    0xEA, 0x98, 0x63, 0xBC, 0x2D, 0xED, 0x5D, 0x5A,
    0xA8, 0x25, 0x3A, 0xA1, 0x0A, 0x2E, 0xF1, 0xC9,
    0x8B, 0x9A, 0xC8, 0xB5, 0x7F, 0x11, 0x17, 0xA7,
    0x2B, 0xF2, 0xC7, 0xB9, 0xE7, 0xC1, 0xAC, 0x4D,
    0x77, 0xFC, 0x94, 0xCA, 0xDC, 0x08, 0x3E, 0x67,
    0x98, 0x40, 0x50, 0xB7, 0x5E, 0xBA, 0xE5, 0xDD,
    0x28, 0x09, 0xBD, 0x63, 0x80, 0x16, 0xF7, 0x23,
    0x04, 0x81, 0x81, 0x04, 0x81, 0xAE, 0xE4, 0xBD,
    0xD8, 0x2E, 0xD9, 0x64, 0x5A, 0x21, 0x32, 0x2E,
    0x9C, 0x4C, 0x6A, 0x93, 0x85, 0xED, 0x9F, 0x70,
    0xB5, 0xD9, 0x16, 0xC1, 0xB4, 0x3B, 0x62, 0xEE,
    0xF4, 0xD0, 0x09, 0x8E, 0xFF, 0x3B, 0x1F, 0x78,
    0xE2, 0xD0, 0xD4, 0x8D, 0x50, 0xD1, 0x68, 0x7B,
    0x93, 0xB9, 0x7D, 0x5F, 0x7C, 0x6D, 0x50, 0x47,
    0x40, 0x6A, 0x5E, 0x68, 0x8B, 0x35, 0x22, 0x09,
    0xBC, 0xB9, 0xF8, 0x22, 0x7D, 0xDE, 0x38, 0x5D,
    0x56, 0x63, 0x32, 0xEC, 0xC0, 0xEA, 0xBF, 0xA9,
    0xCF, 0x78, 0x22, 0xFD, 0xF2, 0x09, 0xF7, 0x00,
    0x24, 0xA5, 0x7B, 0x1A, 0xA0, 0x00, 0xC5, 0x5B,
    0x88, 0x1F, 0x81, 0x11, 0xB2, 0xDC, 0xDE, 0x49,
    0x4A, 0x5F, 0x48, 0x5E, 0x5B, 0xCA, 0x4B, 0xD8,
    0x8A, 0x27, 0x63, 0xAE, 0xD1, 0xCA, 0x2B, 0x2F,
    0xA8, 0xF0, 0x54, 0x06, 0x78, 0xCD, 0x1E, 0x0F,
    0x3A, 0xD8, 0x08, 0x92, 0x02, 0x41, 0x00, 0xAA,
    0xDD, 0x9D, 0xB8, 0xDB, 0xE9, 0xC4, 0x8B, 0x3F,
    0xD4, 0xE6, 0xAE, 0x33, 0xC9, 0xFC, 0x07, 0xCB,
    0x30, 0x8D, 0xB3, 0xB3, 0xC9, 0xD2, 0x0E, 0xD6,
    0x63, 0x9C, 0xCA, 0x70, 0x33, 0x08, 0x70, 0x55,
    0x3E, 0x5C, 0x41, 0x4C, 0xA9, 0x26, 0x19, 0x41,
    0x86, 0x61, 0x19, 0x7F, 0xAC, 0x10, 0x47, 0x1D,
    0xB1, 0xD3, 0x81, 0x08, 0x5D, 0xDA, 0xDD, 0xB5,
    0x87, 0x96, 0x82, 0x9C, 0xA9, 0x00, 0x69, 0x02,
    0x01, 0x01, 0x04, 0x47, 0x30, 0x45, 0x02, 0x01,
    0x01, 0x04, 0x40, 0x5F, 0x13, 0x92, 0xCF, 0xE8,
    0xCF, 0x26, 0x42, 0x72, 0x99, 0xA6, 0x2F, 0x7E,
    0x0A, 0x19, 0xD5, 0xA3, 0x56, 0x69, 0xAC, 0x07,
    0xBD, 0x42, 0x66, 0xA8, 0x40, 0xDB, 0x47, 0x2C,
    0x77, 0x9C, 0x3A, 0xEB, 0xA4, 0xC7, 0x00, 0xBC,
    0x17, 0x6B, 0xE7, 0x2F, 0xAA, 0x8F, 0x9F, 0x63,
    0x2A, 0x3F, 0xC9, 0x83, 0x5D, 0xEB, 0xA6, 0x40,
    0x1B, 0xE0, 0xF8, 0xB1, 0xD3, 0x19, 0xF6, 0x6E,
    0x42, 0x13, 0x19 
};
#pragma endregion

/*
	Closed beta clients
*/
z3KeyDefinition keyList1[ ] =
{
	DEFINE_Z3KEY( "RaiderZ",	Z3_KEY_RAIDERZ_KR_NA )		// KR/NA	PMANG/PWE
	,DEFINE_Z3KEY( "RaiderZ",	Z3_KEY_RAIDERZ_EU )			// EU		Gameforge
	,DEFINE_Z3KEY( "GunZ2",		Z3_KEY_GUNZ2_KR )			// KR		Netmarble
};

const unsigned int keyList1Count = COUNT_METHODS( keyList1 );

/*
	Open beta clients (method 2)
*/

z3KeyDefinition keyList2[ ] =
{
	DEFINE_Z3KEY( "GunZ2",		Z3_KEY_GUNZ2_METHOD2 )		// KR		Netmarble
	,DEFINE_Z3KEY( "RaiderZ",	Z3_KEY_EURAIDERZ_METHOD2 )	// EU		Gameforge
	,DEFINE_Z3KEY( "RaiderZ",	Z3_KEY_NARAIDERZ_METHOD2 )	// NA		PWE
	,DEFINE_Z3KEY( "RaiderZ",	Z3_KEY_JPRAIDERZ_METHOD2 )	// JP		WeMade Online (?)
};

const unsigned int keyList2Count = COUNT_METHODS( keyList2 );

#endif
