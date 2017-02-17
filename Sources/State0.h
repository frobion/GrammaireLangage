//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE0_H
#define GRAMMAIRELANGAGE_STATE0_H


#include "State.h"

class State0 : public State{
public:
    State0();
    virtual ~State0();

    virtual void transition(Automate & automate, std::shared_ptr<Symbol> symbol);

    virtual void printState();
};


#endif //GRAMMAIRELANGAGE_STATE0_H
