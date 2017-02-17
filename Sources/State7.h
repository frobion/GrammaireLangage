//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE7_H
#define GRAMMAIRELANGAGE_STATE7_H


#include "State.h"

class State7 : State{
public:
    State7();
    virtual ~State7();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE7_H
