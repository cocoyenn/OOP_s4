#pragma once 


class Range{
public:
    Range(double lowerLimit=0, double upperLimit=0):_lowerLimit(lowerLimit), _upperLimit(upperLimit){};

    double GetLowerLimit() const {return _lowerLimit; };
    void SetLowerLimit(double value) {_lowerLimit=value; };

    double GetUpperLimit() const {return _upperLimit; };
    void SetUpperLimit(double value) {  _upperLimit=value; };

    ~Range(){};
private:
    double _lowerLimit;
    double _upperLimit;
};