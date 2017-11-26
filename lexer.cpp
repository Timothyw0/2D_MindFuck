#include <string>
#include <fstream>
#include "lexer.h"

using namespace std;

//Eats a character from the global filestream and returns the next
//read token
enum Lexer::TokenType Lexer::getToken(){
    char * buffer = new char;
    in.read(buffer,1);

}
