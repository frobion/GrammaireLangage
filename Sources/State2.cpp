//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State2.h"
#include "Config.h"
#include "State3.h"
#include "State6.h"

State2::State2()
{

}

State2::~State2()
{

}

void State2::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State3>());
            break;
        case ID_OPEN_BRACKET:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State2>());
            break;
        case ID_EXPRESSION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State6>());
            break;
        default:
            automate.refuse();
            std::cerr << "In State2::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}

void State2::printState()
{
    std::cout << "State2"  << std::endl;
}
