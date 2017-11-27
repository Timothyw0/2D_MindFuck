#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/raw_ostream.h>

using namespace llvm;

int main(){
    LLVMContext & Context = getGlobalContext();
    Module MainModule("Mindfuck", Context);
    IRBuilder<> Builder(Context);
}
