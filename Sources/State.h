
//
// Created by francois on 16/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE_H
#define GRAMMAIRELANGAGE_STATE_H


#include <memory>
#include <bits/shared_ptr.h>
#include "Automate.h"
#include "Symbol.h"

class Automate;

class State {

public:
    State();
    virtual ~State();

    virtual void transition(Automate & automate, std::shared_ptr<Symbol> symbol) = 0;
    virtual void getIntoState(Automate & automate);

    virtual void printState() = 0;
};


#endif //GRAMMAIRELANGAGE_STATE_H
