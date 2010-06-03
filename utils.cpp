#include "utils.h"

namespace ff {

	char styriStafur(std::string takn) {
		// assert (takn[0] == '\\')
		switch (takn[1]) {
		case '$':
			// assert (string.length() == 4)
			return (char) (
					  hex2int(takn[2]) << 4
					| hex2int(takn[3]));

		case 'c': case 'C':  return (char) 13;
		case 'b': case 'B':	return (char)  7;
		case 'e': case 'E':	return (char) 27;
		case 'f': case 'F':	return (char) 12;
		case 'n': case 'N':	return (char) 10;
		case 't': case 'T':	return (char)  9;

		case '0': case '1': case '2': case '4':
		case '5': case '6': case '7': case '8':
		case '9':
			return takn[1] - '0';

		default:
			return takn[1];
		}
	}

	int hex2int(char c) {
		if (c >= '0' && c <= '9')
			return c - '0';
		else if (c >= 'a' && c <= 'f')
			return c - 'a' + 10;
		else if (c >= 'A' && c <= 'F')
			return c - 'A' + 10;
		else
			return 0;
	}

}

