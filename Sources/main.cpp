#include <iostream>
#include "Lexer.h"
#include <memory>
#include "Symbol.h"
#include "Config.h"
#include "Automate.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "enter an expression:" << endl;
    Automate automate;
    automate.lecture();
//    Lexer lexer;
//    std::shared_ptr<Symbol> symbol;
//    do{
//        symbol = lexer.get();
//        cout << *symbol << endl;
//    }while (*symbol != ID_EOF);

    return 0;
}
