//
// Created by francois on 16/02/17.
//

#include <iostream>
#include <cstdlib>
#include "Automate.h"

Automate::Automate()
{
}

Automate::~Automate()
{
}

void Automate::lecture() {

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

void Automate::pushSymbol(std::shared_ptr<Symbol> symbol)
{
    symbols.push(symbol);
}