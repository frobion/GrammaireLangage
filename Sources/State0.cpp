//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State0.h"
#include "Config.h"
#include "State1.h"
#include "State2.h"

bool State0::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_NUMBER: // Idem than expression
            
        case ID_EXPRESSION:
            automate.pushState(std::make_shared<State1>());
            automate.pushSymbol(symbol);
            break;
        case ID_OPEN_BRACKET:
            automate.pushState(std::make_shared<State2>());
            automate.pushSymbol(symbol);
            break;
        default:
            std::cerr << "In State0::transition, unexpected value of symbol : " << (int) symbol << std::endl;
    }
}