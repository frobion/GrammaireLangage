//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE9_H
#define GRAMMAIRELANGAGE_STATE9_H


#include "State.h"

class State9 : State{
public:
    State9();
    virtual ~State9();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE9_H
