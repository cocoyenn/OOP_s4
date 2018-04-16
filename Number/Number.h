#pragma once
#include <iostream>
#include <string>
#include "Range.h"

class Number{
public:
    Number(std::string type = "None",double  value=0): _type(type),_value(value){std::cout<<"Manufacturing number "<< _value<<std::endl;};
    std::string GetType(){return _type;};
    double GetValue(){return _value;}
    void Print(){std::cout<<_type<<"="<<_value<<std::endl;};
    static void SetRange(double lowerLimit, double upperLimit);
    static Number * Factory(std::string type, double value);
    ~Number(){ std::cout<<"Destroying number "<< _value<<std::endl;};

    static Range  _range;
private:
    std::string _type;
    double _value;
};