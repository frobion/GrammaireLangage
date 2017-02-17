#include "Number.h"

Number::Number(int value): Symbol(ID_NUMBER),numberValue(value)
{

}

Number::getValue() const
{
    return numberValue;
}
