//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State0.h"
#include "Config.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"

State0::State0()
{

}

State0::~State0()
{

}

void State0::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State3>());
            break;
        case ID_EXPRESSION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State1>());
            break;
        case ID_OPEN_BRACKET:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State2>());
            break;
        default:
            automate.refuse();
            std::cerr << "In State0::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}

void State0::printState()
{
    std::cout << "State0" << std::endl;
}
