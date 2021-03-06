//
// Created by francois on 16/02/17.
//

#include <iostream>
#include "Symbol.h"

Symbol::Symbol(int id) : id(id)
{}

Symbol::~Symbol() {}

Symbol::operator int() const {
    return id;
}

int Symbol::getId() const
{
    return id;
}

void Symbol::print() const
{
    std::cout << id << std::endl;
}