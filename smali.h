#ifndef __smali_h__
#define __smali_h__

#include <string>

namespace ff {

#define emit(x,y)   out << '\t' << x << '\t' << y << '\n';

#define emit_forskeyti(x) out << '\t' << x << ":\n";

#define emit_push(x)  out << "\tPUSH\t" << x << '\n'; \
	_umlykjandiStef->stackDelta(2);

#define emit_pop(x)  out << "\tPOP\t" << x << '\n'; \
	_umlykjandiStef->stackDelta(-2);

#define emit_popn(n)  out << "\tADD\tSP," << (n) << '\n'; \
	_umlykjandiStef->stackDelta(-(n));

#define emit_label(x) out << x << ":\n";

extern unsigned int __nextLabel;
#define newlabel() (__nextLabel++)
#define l(x) "_" << (x)

std::string quote(const std::string& s);

};

#endif /* __smali_h__ */