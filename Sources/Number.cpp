#include "Number.h"
#include "Config.h"

Number::Number(int value): Symbol(ID_NUMBER),numberValue(value)
{

}

int Number::getValue() const
{
    return numberValue;
}
