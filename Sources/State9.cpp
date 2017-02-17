#include <iostream>
#include "State9.h"
#include "Config.h"
#include "Expression.h"

State9::State9()
{

}

State9::~State9()
{

}

void State9::transition(Automate &automate, std::shared_ptr<Symbol> symbol)
{
    std::cerr << "In State9::transition, method should not be called" << std::endl;
}

void State9::getIntoState(Automate &automate)
{
    std::shared_ptr<Expression> expression;

    std::shared_ptr<Symbol> nextSymbol = automate.peekSymbol();
    switch (*nextSymbol)
    {
        case ID_PLUS:
        case ID_MULTIPLICATION:
        case ID_CLOSE_BRACKET:
        case ID_EOF:
            automate.popState(3);
            automate.popSymbol();
            expression = std::dynamic_pointer_cast<Expression>(automate.popSymbol());
            automate.popSymbol();

            automate.pushSymbol(expression);
            automate.nextTransition();
            break;
        default:
            std::cerr << "In State9::getIntoState, unexpected value of next symbol : " << nextSymbol->getId() << std::endl;
    }
}
