#include "Number.h"
#include "OutOfRange.h"

Range Number::_range;
std::vector<Number *> OutOfRange::numbers;

void Number::SetRange(double lowerLimit, double upperLimit){
    Number::_range.SetLowerLimit(lowerLimit);
    Number::_range.SetUpperLimit(upperLimit);
}

Number * Number::Factory(std::string type, double value){

    Number *object=new Number(type, value);
    OutOfRange::numbers.push_back(object);

    if (value>Number::_range.GetUpperLimit() || value <Number::_range.GetLowerLimit()){
        throw  OutOfRange(object );
    }

    return object;
}




