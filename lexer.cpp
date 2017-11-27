#include <string>
#include <fstream>
#include <iostream>
#include "lexer.h"

using namespace std;

//Eats a character from the global filestream and returns the next
//read token
enum Lexer::TokenType Lexer::getToken(){
    char * buffer = new char;
    in.read(buffer,1);
    switch (*buffer) {
      case ('>'):
			case ('<'):
			case ('^'):
			case ('v'):
				return movPtr;
			case ('+'):
			case ('-'):
				return chPtr;
			case ('['):
			case (']'):
				return manLoop;
			case ('.'):
			case (','):
				return function;
    }
}
