#include "smali.h"

unsigned int ff::__nextLabel = 1;

std::string ff::quote(const std::string& s) {
	std::string retval;
	std::string::const_iterator i;
	for (i = s.begin(); i != s.end(); i++) {
		retval.push_back('\\');
		retval.push_back(*i);
	}
	return retval;
}