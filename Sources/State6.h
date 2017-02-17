//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE6_H
#define GRAMMAIRELANGAGE_STATE6_H


#include "State.h"

class State6 : public State{
public:
    State6();
    virtual ~State6();

    virtual bool transition(Automate & automate, std::shared_ptr<Symbol> symbol);
};


#endif //GRAMMAIRELANGAGE_STATE6_H
