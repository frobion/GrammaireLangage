#include <iostream>

#include "Lexer.h"
#include "Config.h"
#include "Number.h"

const int PLUS    = 1;
const int MULT    = 2;
const int OPEN    = 3;
const int CLOSE   = 4;
const int NUMBER  = 5;
const int END     = 6;
const int UNKNOWN = -1;

Lexer::Lexer()
{
    currentSymbol = nullptr;
}

Lexer::~Lexer()
{

}

int Lexer::getCharType(char c) const
{
    if(c == '+')
    {
        return PLUS;
    }
    else if(c == '*')
    {
        return MULT;
    }
    else if(c == '(')
    {
        return OPEN;
    }
    else if(c == ')')
    {
        return CLOSE;
    }
    else if(c <= '9' && c >= '0')
    {
        return NUMBER;
    }
    else if(c == EOF)
    {
        return END;
    }
}

std::string Lexer::nextWord()
{
    std::string word = "";
    char currentChar;

    currentChar = std::cin.peek();

    while(getCharType(currentChar) == UNKNOWN)
    {
        std::cin.get();
        currentChar = std::cin.peek();
    }

    while(getCharType(currentChar) == NUMBER)
    {
        word.push_back(currentChar);
        std::cin.get();
        currentChar = std::cin.peek();
    }

    if(word == "")
    {
        word.push_back(currentChar);
        std::cin.get();
    }

    return word;
}

void Lexer::getNextSymbol()
{
    std::string word;

    word = nextWord();

    if(word.size() == 0)
    {
        currentSymbol = std::make_shared<Symbol>(ID_EOF);
        return;
    }
    switch (getCharType(word.at(0))) {
    case PLUS:
        currentSymbol = std::make_shared<Symbol>(ID_PLUS);
        return;
    case MULT:
        currentSymbol = std::make_shared<Symbol>(ID_MULTIPLICATION);
        return;
    case OPEN:
        currentSymbol = std::make_shared<Symbol>(ID_OPEN_BRACKET);
        return;
    case CLOSE:
        currentSymbol = std::make_shared<Symbol>(ID_CLOSE_BRACKET);
        return;
    case END:
        currentSymbol = std::make_shared<Symbol>(ID_EOF);
        return;
    case NUMBER:
        int value = std::atoi(word.c_str());
        currentSymbol = std::make_shared<Number>(value);
        return;
    }
    std::cerr << "Unknow symbole on word, set to EOF" << std::endl;
    currentSymbol = std::make_shared<Symbol>(ID_EOF);
    return;
}

std::shared_ptr<Symbol> Lexer::peek()
{
    if(currentSymbol == nullptr)
    {
        getNextSymbol();
    }
    return currentSymbol;
}

std::shared_ptr<Symbol> Lexer::get()
{
    getNextSymbol();
    return currentSymbol;
}
















