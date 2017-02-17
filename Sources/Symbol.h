//
// Created by francois on 16/02/17.
//

#ifndef GRAMMAIRELANGAGE_SYMBOLE_H
#define GRAMMAIRELANGAGE_SYMBOLE_H

class Symbol {

public:
    Symbol(); // Declared but not defined, to avoid any used
    Symbol(int id);
    virtual ~Symbol();

    operator int() const;
    int getId() const;
    virtual void print() const;

protected:
    int id;
};


#endif //GRAMMAIRELANGAGE_SYMBOLE_H
