//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE4_H
#define GRAMMAIRELANGAGE_STATE4_H


#include "State.h"

class State4 : State{
public:
    State4();
    virtual ~State4();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE4_H
