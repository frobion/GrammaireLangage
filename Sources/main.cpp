#include <iostream>
#include "Lexer.h"
#include <memory>
#include "Symbol.h"
#include "Config.h"
#include "Automate.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Enter an expression: (or use Ctrl + C to quit)" << endl;
    //loop on lecture
    while(true)
    {
        Automate automate;
        automate.lecture();
    }

    return 0;
}
