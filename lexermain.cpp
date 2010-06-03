#if 0

#pragma warning(push)
#pragma warning( disable : 4251 4267 4101 4267 )

#include "FjolnirForritLexer.hpp"
#include "FjolnirEiningLexer.hpp"
#include "FjolnirParser.hpp"
#include <antlr/TokenStreamSelector.hpp>

#pragma warning(pop)

#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
using namespace antlr;
using namespace ff;

int eeemain_lex(int argc, char** args) {
	std::istream* input;

	if (argc > 1) {
		input = new std::ifstream(args[1], std::ios::in);
	} else {
		input = &cin;
	}

	TokenStreamSelector selector;

	FjolnirForritLexer forritLexer(*input);
	forritLexer.initialize(&selector);

	FjolnirEiningLexer einingLexer(forritLexer.getInputState());
	einingLexer.initialize(&selector);

	selector.addInputStream(&forritLexer, "forritlexer");
	selector.addInputStream(&einingLexer, "eininglexer");
	selector.select("forritlexer");

	/* fyrir tók-nöfn */
	FjolnirParser parser(selector);

	RefToken t;
	while ( (t=selector.nextToken())->getType()!=Token::EOF_TYPE ) {
		//cout << parser.getTokenName(t->type) << t->toString() << endl;
		printf("%-30s <%2d> %s\n", parser.getTokenName(t->type), t->type, t->getText().c_str());
		//cout << "tók" << endl;
	}

	return 0;

}

#endif