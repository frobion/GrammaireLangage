//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE3_H
#define GRAMMAIRELANGAGE_STATE3_H


#include "State.h"

class State3 : public State{
public:
    State3();
    virtual ~State3();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE3_H
