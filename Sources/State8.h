//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE8_H
#define GRAMMAIRELANGAGE_STATE8_H


#include "State.h"

class State8 : State{
public:
    State8();
    virtual ~State8();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE8_H
