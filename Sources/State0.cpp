//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State0.h"
#include "Config.h"
#include "State1.h"
#include "State5.h"

bool State0::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_EXPRESSION:
            //automate.pushState(std::make_shared<State1>());
            break;
    }
}