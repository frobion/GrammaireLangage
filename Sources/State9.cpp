#include <iostream>
#include "State9.h"
#include "Config.h"


State9::State9()
{

}

State9::~State9()
{

}

void State9::transition(Automate &automate, std::shared_ptr<Symbol> nextSymbol)
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
        automate.refuse();
        std::cerr << "State9: unknow Symbole ID: " << *nextSymbol << std::endl;
        break;
    }
}


void State9::r4reduction(Automate &automate, std::shared_ptr<Symbol> nextSymbol)
{
    //pop 3 symbole and re-push the second one (remove brackets) and push next symbol
    automate.popSymbol();
    auto symbole = automate.popSymbol();
    automate.popSymbol();
    automate.pushSymbol(symbole);
    automate.pushSymbol(nextSymbol);
    //pop 3 state
    automate.popState(3);

    automate.nextTransition();
}
