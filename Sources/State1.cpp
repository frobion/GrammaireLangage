//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State1.h"
#include "Config.h"
#include "State4.h"
#include "State5.h"

State1::State1()
{

}

State1::~State1()
{

}

void State1::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_PLUS:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State4>());
            break;
        case ID_MULTIPLICATION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State5>());
            break;
        case ID_EOF:
            automate.accept();
            break;
        default:
            automate.refuse();
            std::cerr << "In State1::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }
}

void State1::printState()
{
    std::cout << "State1" << std::endl;
}
