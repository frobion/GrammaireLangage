//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State6.h"
#include "Config.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"

State6::State6()
{

}

State6::~State6()
{

}
void State6::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
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
        case ID_CLOSE_BRACKET:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State9>());
            break;
        default:
            automate.refuse();
            std::cerr << "In State6::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}

void State6::printState()
{
    std::cout << "State6" << std::endl;
}
