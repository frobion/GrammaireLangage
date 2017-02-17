#include "Lexer.h"
#include <iostream>
#include "Config.h"

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
        word.append(currentChar);
        std::cin.get();
        currentChar = std::cin.peek();
    }

    if(word == "")
    {
        word.append(currentChar);
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
        currentSymbol = std::make_shared(ID_EOF);
        return;
    }
    switch (getCharType(word.at(0))) {
    case PLUS:
        currentSymbol = std::make_shared(ID_PLUS);
        return;
    case MULT:
        currentSymbol = std::make_shared(ID_MULTIPLICATION);
        return;
    case OPEN:
        currentSymbol = std::make_shared(ID_OPENTBRACKET);
        return;
    case CLOSE:
        currentSymbol = std::make_shared(ID_CLOSEBRACKET);
        return;
    case END:
        currentSymbol = std::make_shared(ID_EOF);
        return;
    default:
        break;
    }

}

















