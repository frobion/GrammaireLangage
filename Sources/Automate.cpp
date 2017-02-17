//
// Created by francois on 16/02/17.
//

#include <iostream>
#include <cstdlib>
#include "Automate.h"
#include "Config.h"

Automate::Automate()
{
}

Automate::~Automate()
{
}

void Automate::lecture()
{
    evaluationFinished = false;

    while(evaluationFinished == false)
    {
        std::shared_ptr<Symbol> nextSymbole;
        nextSymbole = lexer.get();
        states.top()->transition(*this, nextSymbole);
    }
}

void Automate::popState(int number)
{
    if (number < 0) {
        std::cerr << "In Automate::popState" << std::endl << "number must be greater or equal than 0, but it is "
                  << number << std::endl;
        exit(1);
    }

    for (int i = 0; i < number; i++)
    {
        states.pop();
    }
}

void Automate::pushState(std::shared_ptr<State> state)
{
    states.push(state);
}

void Automate::popSymbol(int number)
{
    if (number < 0) {
        std::cerr << "In Automate::popSymbol" << std::endl << "number must be greater or equal than 0, but it is "
                  << number << std::endl;
        exit(1);
    }

    for (int i = 0; i < number; i++)
    {
       symbols.pop();
    }
}

std::shared_ptr<Symbol> Automate::popSymbol()
{
    std::shared_ptr<Symbol> result = symbols.top();
    symbols.pop();
    return result;
}

void Automate::pushSymbol(std::shared_ptr<Symbol> symbol)
{
    symbols.push(symbol);
}

void Automate::accept()
{
    evaluationFinished = true;
    std::cout << "expression accepted, value is : " << std::endl;
}

void Automate::refuse()
{
    evaluationFinished = true;
    while(*(lexer.get()) == ID_EOF)
}

void Automate::nextTransition()
{
    std::shared_ptr<Symbol> symbol = symbols.top();
    symbols.pop();
    states.top()->transition(*this, symbol);
}
