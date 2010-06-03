a2ps -A fill -C -l 95 --prologue=fixed -o support.ps iofilter.h translate.cpp MyAST.h utils.h utils.cpp
a2ps -A fill -C -l 95 --prologue=fixed -o lex-parse.ps FjolnirForritLexer.g FjolnirEiningLexer.g FjolnirParser.g FjolnirTransformer.g
a2ps -A fill -C -l 95 --prologue=fixed -o codegen.ps FjolnirCodegen.g smali.h smali.cpp stef.h stef.cpp segd.h segd.cpp segdir.h segd_operators.cpp segd_assign.cpp segd_kall.cpp segd_cond.cpp segd_loop.cpp segd_stofn.cpp segd_value.cpp
a2ps -A fill -C -l 95 --prologue=fixed -o main.ps main.cpp
del code.zip
zip code.zip iofilter.h translate.cpp MyAST.h utils.h utils.cpp FjolnirForritLexer.g FjolnirEiningLexer.g FjolnirParser.g FjolnirTransformer.g FjolnirCodegen.g smali.h smali.cpp stef.h stef.cpp segd.h segd.cpp segdir.h segd_operators.cpp segd_assign.cpp segd_kall.cpp segd_cond.cpp segd_loop.cpp segd_stofn.cpp segd_value.cpp main.cpp

