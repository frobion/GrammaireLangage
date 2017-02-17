#include <iostream>
#include "State9.h"
#include "Config.h"

bool State9::transition(Automate &automate, std::shared_ptr<Symbol> nextSymbol)
{
    switch (*nextSymbol) {
    case ID_PLUS:
        r4reduction(automate,nextSymbol);
        break;
    case ID_MULTIPLICATION:
        r4reduction(automate,nextSymbol);
        break;
    case ID_CLOSE_BRACKET:
        r4reduction(automate,nextSymbol);
        break;
    case ID_EOF:
        r4reduction(automate,nextSymbol);
        break;
    default:
        std::cerr << "State9: unknow Symbole ID: " << *nextSymbol << std::endl;
        break;
    }
}


void State9::r4reduction(Automate &automate, std::shared_ptr<Symbol> nextSymbol)
{
    automate.popState(1);
    auto state = automate.
    automate.popState(1);
    automate.pushState(state);
}
