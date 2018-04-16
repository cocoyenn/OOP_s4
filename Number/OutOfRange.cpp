#include "OutOfRange.h"


std::ostream & operator<<(std::ostream & show, const OutOfRange & message){
    show<<"Number named: "<<message.GetNumber()->GetType() <<" has value "<<message.GetNumber()->GetValue() <<" which is outside of the allowed range: ["<<Number::_range.GetLowerLimit()<<":"<<Number::_range.GetUpperLimit()<<"]";
    return show;
}

OutOfRange::~OutOfRange(){
    
    for(unsigned i =0; i<numbers.size(); i++)
    {
        if(numbers[i]!= NULL){
            delete numbers[i];
            numbers[i]=NULL;
        }
    }
}

