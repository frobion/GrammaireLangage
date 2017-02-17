//
// Created by francois on 17/02/17.
//

#include <iostream>
#include "State7.h"
#include "Config.h"
#include "State5.h"
#include "Expression.h"
#include "Number.h"

State7::State7()
{

}

State7::~State7()
{

}

void State7::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    switch (*symbol)
    {
        case ID_MULTIPLICATION:
            automate.pushSymbol(symbol);
            automate.pushState(std::make_shared<State5>());
            break;
        default:
            std::cerr << "In State7::transition, unexpected value of symbol : " << symbol->getId() << std::endl;
    }
}

void State7::getIntoState(Automate &automate)
{
    std::shared_ptr<Expression> expression1;
    std::shared_ptr<Expression> expression2;
    std::shared_ptr<Expression> expression;

    std::shared_ptr<Symbol> nextSymbol = automate.peekSymbol();
    switch (*nextSymbol)
    {
        case ID_PLUS:
        case ID_CLOSE_BRACKET:
        case ID_EOF:
            automate.popState(3);
            expression1 = std::dynamic_pointer_cast<Expression>(automate.popSymbol());
            automate.popSymbol();
            expression2 = std::dynamic_pointer_cast<Expression>(automate.popSymbol());

            expression = std::make_shared<Expression>(expression1->getValue() + expression2->getValue());
            automate.pushSymbol(expression);
            automate.nextTransition();
            break;
        case ID_MULTIPLICATION:
            break; // if next symbol is "*", it will be used in the method transition (nothing to be done here).
        default:
            automate.refuse();
            std::cerr << "In State7::transition, unexpected value of symbol : " << nextSymbol->getId() << std::endl;
    }
}

void State7::printState()
{
    std::cout << "State7" << std::endl;
}
