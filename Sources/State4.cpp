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
bool State4::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER:
            automate.pushState(std::make_shared<State3>());
            automate.pushSymbol(symbol);
            break;
        case ID_EXPRESSION:
            automate.pushState(std::make_shared<State7>());
            automate.pushSymbol(symbol);
            break;
        case ID_OPEN_BRACKET:
            automate.pushState(std::make_shared<State2>());
            automate.pushSymbol(symbol);
            break;
        default:
            std::cerr << "In State4::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }

}