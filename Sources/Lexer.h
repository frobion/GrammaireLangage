//
// Created by francois on 16/02/17.
//

#ifndef GRAMMAIRELANGAGE_LEXER_H
#define GRAMMAIRELANGAGE_LEXER_H

#include <string>
#include <memory>
#include "Symbol.h"

class Lexer {

public:
    Lexer();
    ~Lexer();

    std::shared_ptr<Symbol> get();
    std::shared_ptr<Symbol> peek();

protected:
    void getNextSymbol();
    std::string nextWord();
    int getCharType(char c) const;

private:
    std::shared_ptr<Symbol> currentSymbol;

    const int PLUS    = 1;
    const int MULT    = 2;
    const int OPEN    = 3;
    const int CLOSE   = 4;
    const int NUMBER  = 5;
    const int END     = 6;
    const int UNKNOWN = -1;
};


#endif //GRAMMAIRELANGAGE_LEXER_H
