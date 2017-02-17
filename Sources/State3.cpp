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

void State3::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    std::cerr << "In State3::transition, method should not be called" << std::endl;
}

void State3::getIntoState(Automate &automate)
{
    std::shared_ptr<Expression> expression;
    std::shared_ptr<Number> number;

    std::shared_ptr<Symbol> nextSymbol = automate.peekSymbol();
    switch (*nextSymbol)
    {
        case ID_PLUS:
        case ID_MULTIPLICATION:
        case ID_CLOSE_BRACKET:
        case ID_EOF:
            automate.popState(1);
            number = std::dynamic_pointer_cast<Number>(automate.popSymbol());
            expression = std::make_shared<Expression>(number->getValue());

            automate.pushSymbol(expression);
            automate.nextTransition();
            break;
        default:
            automate.refuse();
            std::cerr << "In State3::transition, unexpected value of symbol : " << nextSymbol->getId() << std::endl;
    }
}

