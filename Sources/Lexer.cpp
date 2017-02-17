#include "Lexer.h"
#include <iostream>

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

void Lexer::getNextSymbole()
{
    std::string word;

    word = nextWord();


}

















