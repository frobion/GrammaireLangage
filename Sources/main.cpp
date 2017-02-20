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
    //loop on lecture
    while(true)
    {
        Automate automate;
        automate.lecture();
    }

    return 0;
}
