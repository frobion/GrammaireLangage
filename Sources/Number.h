//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_NUMBER_H
#define GRAMMAIRELANGAGE_NUMBER_H


#include "Symbol.h"

class Number : Symbol{

public:
    Number(); //disable default constructor
    Number(int value);

    int getValue() const;

private:
    int numberValue;
};


#endif //GRAMMAIRELANGAGE_NUMBER_H
