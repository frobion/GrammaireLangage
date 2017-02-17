#include <iostream>
#include "State9.h"
#include "Config.h"


State9::State9()
{

}

State9::~State9()
{

}

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
    //pop 3 symbole and re-push the second one (remove brackets)
    automate.popSymbol();
    auto symbole = automate.popSymbol();
    automate.popSymbol();
    automate.pushSymbol(symbole);
    //pop 3 state
    automate.popState(3);
}
