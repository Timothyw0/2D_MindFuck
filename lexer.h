#ifndef LEXER_H
#define LEXER_H

#include <string>

using namespace std;
class Lexer{

private:
    

    //Token types that will be returned to the parser
    //movePtr - move the pointer around: '<', '>', '^', 'v'
    //chPtr - increment or decrement the pointer: '+', '-'
    //manLoop - symbols to control looping mechanism: '[', ']'
    enum TokenType{
        movPtr, chPtr, manLoop
    };

    //stores the current token operator type
    string opVal;

    //The filestream of the source file
    ifstream in;

public:
    enum TokenType getToken();
};
#endif
