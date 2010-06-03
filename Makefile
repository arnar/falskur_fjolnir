
objs = utils.o \
		 FjolnirEiningLexer.o \
		 FjolnirForritLexer.o \
		 lexermain.o

CC=cl
CFLAGS=/GX /GR /IG:\src\antlr-2.7.2\lib\cpp  /Zi

LD=link
LDFLAGS=/LIBPATH:.\lib # /DEBUG

JAVA_HOME=g:\j2sdk1.4.2
JAVA=$(JAVA_HOME)\bin\java

all: lesgreinir.exe

%.o: %.cpp
	$(CC) $(CFLAGS) /c /Fo$@ $<

FjolnirForritLexer.cpp FjolnirForritLexer.hpp FjolnirForritTokenTypes.txt: FjolnirForritLexer.g
	$(JAVA) -cp g:\jars\antlr.jar antlr.Tool FjolnirForritLexer.g

FjolnirEiningLexer.cpp FjolnirEiningLexer.hpp FjolnirTokenTypes.txt: FjolnirForritTokenTypes.txt FjolnirEiningLexer.g
	$(JAVA) -cp g:\jars\antlr.jar antlr.Tool FjolnirEiningLexer.g

lesgreinir.exe: $(objs)
	$(LD) $(LDFLAGS) antlrdll.lib /OUT:$@ $(objs)	

