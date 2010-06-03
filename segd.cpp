#include "segd.h"
#include "smali.h"
#include "stef.h"

#include <iostream>
#include <stdarg.h>

using namespace ff;

void Segd::generatePUSH(ostream& out) const {
	generateAXDX(out);
	emit_push("AX");
	emit_push("DX");
}

void Segd::generateNOVAL(ostream& out) const {
	generateAXDX(out);
}

void Segd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	generateAXDX(out);
	if (iftrue) {
		emit("TEST", "DL,1");
		emit("JZ", l(iftrue));
	}
	if (iffalse) {
		emit("TEST", "DL,1");
		emit("JNZ", l(iffalse));
	}
}

extern std::ostream* __ff_errors;
void Segd::reportError(const char* villa, ...) const {
	char buffer1[32], buffer2[128];
	va_list vl;
	va_start(vl,villa);

	if (0 == _line)
		::strncpy(buffer1, "Villa: ", 32);
	else
		::_snprintf(buffer1, 32, "Villa í línu %d: ", _line);
	::_vsnprintf(buffer2, 128, villa, vl);

	*__ff_errors << endl << buffer1 << buffer2 << endl;

	exit(1);
}