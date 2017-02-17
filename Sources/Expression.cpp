//
// Created by francois on 16/02/17.
//

#include "Expression.h"
#include "Config.h"

Expression::Expression(int value) : Symbol(ID_EXPRESSION), value(value)
{

}

Expression::~Expression()
{

}

int Expression::getValue() const
{
    return value;
}