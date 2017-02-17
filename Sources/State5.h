//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE5_H
#define GRAMMAIRELANGAGE_STATE5_H


#include "State.h"

class State5 : State{
public:
    State5();
    virtual ~State5();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE5_H
