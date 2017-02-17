//
// Created by francois on 16/02/17.
//

#ifndef GRAMMAIRELANGAGE_EXPRESSION_H
#define GRAMMAIRELANGAGE_EXPRESSION_H


#include "Symbol.h"

class Expression : public Symbol {
public:
    Expression(); // disable default constructor
    Expression(int value);
    virtual ~Expression();

    int getValue() const;

private:

    int value;

};


#endif //GRAMMAIRELANGAGE_EXPRESSION_H
