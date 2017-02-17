//
// Created by francois on 16/02/17.
//

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