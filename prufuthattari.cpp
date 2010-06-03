#if 0

#include <iostream>
#include <fstream>

#pragma warning(push)
#pragma warning( disable : 4251 4267 4101 4267 )

#include "FjolnirForritLexer.hpp"
#include "FjolnirEiningLexer.hpp"
#include "FjolnirParser.hpp"
#include "FjolnirTransformer.hpp"
#include <antlr/AST.hpp>
#include <antlr/CommonAST.hpp>
#include <antlr/TokenStreamSelector.hpp>

#pragma warning(pop)

int eeemain_lex(int argc, char** args);
void eeeprintTree(antlr::RefAST tree, std::ostream& out, antlr::Parser& p, int indent = 0);
int eeeprintDotTree(antlr::RefAST tree, std::ostream& out, antlr::Parser& p);

int eeemain_parse(int argc, char** args)
{
	using namespace std;
	using namespace antlr;
	using namespace ff;

	try {
		istream* input;

		if (argc > 1) {
			input = new ifstream(args[1], ios::in);
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

		ASTFactory my_factory;
		FjolnirParser parser(selector);

		parser.initializeASTFactory(my_factory);
		parser.setASTFactory(&my_factory);

		parser.forrit();
		RefAST ast = RefAST(parser.getAST());

		// cout << "Fyrir transformation:" << endl;
		if (ast) {
			// printTree(ast, cout, parser);
		} else {
			cout << "null AST" << endl;
		}

		FjolnirTransformer tparser;
		tparser.initializeASTFactory(my_factory);
		tparser.setASTFactory(&my_factory);
		tparser.forrit(ast);
		RefAST transformed = RefAST(tparser.getAST());

		// cout << endl << "Eftir fasa 2:" << endl;
		if (ast) {
			// printTree(transformed, cout, parser);
			cout << "digraph G {" << endl;
			cout << "edge [fontname=\"Helvetica\",fontsize=10,labelfontname=\"Helvetica\",labelfontsize=10];" << endl;
			cout << "node [fontname=\"Helvetica\",fontsize=10,shape=box];" << endl;
			printDotTree(transformed, cout, parser);
			cout << "}" << endl;
		} else {
			cout << "null AST" << endl;
		}

	} catch(exception& e) {
		cerr << "exception: " << e.what() << endl;
	}

	return 0;
}

void eeeprintTree(antlr::RefAST tree, std::ostream& out, antlr::Parser& p, int indent) {
	int j = indent;
	std::string i = ""; while (j-- > 0) i += "  ";
	if (tree->getFirstChild()) {
		out << i << "( " << tree->toString() << " <" <<
			p.getTokenName(tree->getType()) << ">" << std::endl;
		printTree(tree->getFirstChild(), out, p, indent+1);
		out << i << ")" << std::endl;
	} else {
		out << i << tree->toString() << " <" << 
			p.getTokenName(tree->getType()) << ">" << std::endl;
	}
	if (tree->getNextSibling()) {
		printTree(tree->getNextSibling(), out, p, indent);
	}
}

static int eee_dot_node = 0;
int eeeprintDotTree(antlr::RefAST tree, std::ostream& out, antlr::Parser& p) {
	int me = ++_dot_node;
	out << me << " [label=\"" << p.getTokenName(tree->getType())
		<< "\\n" << tree->getText() << "\"];" << std::endl;
	antlr::RefAST c = tree->getFirstChild();
	while (antlr::nullAST != c) {
		int child = printDotTree(c, out, p);
		out << me << " -> " << child << ";" << std::endl;
		c = c->getNextSibling();
	}
	return me;
}

#endif