//
// Created by francois on 16/02/17.
//

#ifndef GRAMMAIRELANGAGE_AUTOMATE_H
#define GRAMMAIRELANGAGE_AUTOMATE_H

#include <stack>
#include <memory>
#include <bits/shared_ptr.h>
#include "Lexer.h"
#include "Symbol.h"
#include "State.h"

class State;

class Automate {

public:
    Automate();
    virtual ~Automate();

    void lecture();
    void popState(int number);
    void pushState(std::shared_ptr<State> state);
    std::shared_ptr<Symbol> popSymbol();
    void popSymbol(int number);
    void pushSymbol(std::shared_ptr<Symbol> symbol);
    void accept();

private:
    Lexer lexer;
    std::stack<std::shared_ptr<Symbol>> symbols;
    std::stack<std::shared_ptr<State>> states;
};


#endif //GRAMMAIRELANGAGE_AUTOMATE_H
