//
// Created by francois on 17/02/17.
//

#ifndef GRAMMAIRELANGAGE_STATE9_H
#define GRAMMAIRELANGAGE_STATE9_H


#include "State.h"

class State9 : public State{
public:
    State9();
    virtual ~State9();

    virtual void transition(Automate & automate, std::shared_ptr<Symbol> nextSymbol);

private:
    void r4reduction(Automate &automate, std::shared_ptr<Symbol> nextSymbol);
};


#endif //GRAMMAIRELANGAGE_STATE9_H
