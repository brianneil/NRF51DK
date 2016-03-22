//Some Apollo specific constants

#define DIDPLAYTONE 1
#define SILENT 0
#define STARTLISTENING 0x01

enum freqs_t {
	f250HZ,
	f500HZ,
	f1KHZ,
	f2KHZ,
	f3KHZ,
	f4KHZ,
	f8KHZ
};

enum ears_t {
	rightOnly,
	leftOnly,
	both};

enum states_t {
	notListening,
	listeningForFreq,
	listeningForVol,
	listeningForEar
};