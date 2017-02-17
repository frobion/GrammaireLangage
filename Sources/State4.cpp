//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State4.h"
#include "Config.h"
#include "State3.h"
#include "State7.h"
#include "State2.h"

State4::State4()
{

}

State4::~State4()
{

}
void State4::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State3>());
            break;
        case ID_EXPRESSION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State7>());
            break;
        case ID_OPEN_BRACKET:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State2>());
            break;
        default:
            automate.refuse();
            std::cerr << "In State4::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}

void State4::printState()
{
    std::cout << "State4" << std::endl;
}
