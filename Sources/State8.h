//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE8_H
#define GRAMMAIRELANGAGE_STATE8_H


#include "State.h"

class State8 : public State{
public:
    State8();
    virtual ~State8();

    virtual void transition(Automate & automate, std::shared_ptr<Symbol> symbol);
    virtual void getIntoState(Automate & automate);

    virtual void printState();
};


#endif //GRAMMAIRELANGAGE_STATE8_H
