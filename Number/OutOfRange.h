#pragma once 

#include "Number.h"
#include <vector>
#include <algorithm>


class OutOfRange{
public:
    OutOfRange(Number * num):number(num){};
    Number * GetNumber() const{return number;};
    ~OutOfRange();
    friend std::ostream & operator<<(std::ostream & show, const OutOfRange & message);
    static std::vector<Number *> numbers;
    
private:
    Number * number;
};
