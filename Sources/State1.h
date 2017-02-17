//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE1_H
#define GRAMMAIRELANGAGE_STATE1_H


#include "State.h"

class State1 : public State{
public:
    State1();
    virtual ~State1();

    virtual void transition(Automate & automate, std::shared_ptr<Symbol> symbol);

};


#endif //GRAMMAIRELANGAGE_STATE1_H
