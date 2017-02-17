//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State5.h"
#include "Config.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"

State5::State5()
{

}

State5::~State5()
{

}
void State5::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State3>());
            break;
        case ID_EXPRESSION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State8>());
            break;
        case ID_OPEN_BRACKET:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State2>());
            break;
        default:
            automate.refuse();
            std::cerr << "In State5::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}

void State5::printState()
{
    std::cout << "State5" << std::endl;
}
