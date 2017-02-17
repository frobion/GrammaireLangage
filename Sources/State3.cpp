//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State3.h"
#include "Config.h"
#include "Number.h"
#include "Expression.h"

State3::State3()
{

}

State3::~State3()
{

}

bool State3::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_PLUS:
        case ID_MULTIPLICATION:
        case ID_CLOSE_BRACKET:
        case ID_EOF:
            automate.popState(1);
            std::shared_ptr<Number> number = std::dynamic_pointer_cast<Number>(automate.popSymbol());
            std::shared_ptr<Expression> expression = std::make_shared<Expression>(number->getValue());
            automate.pushSymbol(expression);

            break;
    }
}