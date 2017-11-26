#include <string>
#include <fstream>

using namespace std;

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


//Eats a character from the global filestream and returns the next
//read token
enum TokenType getToken(){
    
}
