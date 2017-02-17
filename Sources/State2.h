//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE2_H
#define GRAMMAIRELANGAGE_STATE2_H


#include "State.h"

class State2 : public State{
public:
    State2();
    virtual ~State2();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE2_H
