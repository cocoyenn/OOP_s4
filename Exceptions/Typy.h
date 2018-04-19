#pragma once 
#include <iostream>
class ObiektMiotajacy;
//#include "ObiektMiotajacy.h"

/**
*Klasa typ jest klasą bazową, dla innych klas wyrzucające typy wyjątków
*/
class typ{
public:

/**
*konstruktor domyślny, ustawia typ na 0
*/
    typ(): _type(0) {};
/**
*funkcja przedstaw się wyświetla na ekran typ okiektu oraz jego adres
*/
    virtual void PrzedstawSie(){std::cout<<"Nazywam sie "<<this->_type<< " (adres obiektu: "<<this<<" )\n";};
    

/**
*funkcja GetAdress zwraca adres obiektu
*/

    virtual typ * GetAdress(){return this;};
/**
*funkcja GetType zwraca typ wyjątku, w postaci jego numeru
*/
    virtual int GetType(){return _type;};

    virtual ~typ(){};

protected:
/**
*zmienna określająca typ wyjątku
*/ 
    int _type;
};

/**
*Klasa typ4 jest klasą określającą typ wyjątku
*/
class typ4: public typ{
public:
    typ4():typ(){_type=4;};
protected:
};


/**
*Klasa typ1 jest klasą określającą typ wyjątku
*dziedziczy po klasie typ4
*/

class typ1:public typ4{
public:
   typ1():typ4(){_type=1;};
protected:
   
};


/**
*Klasa typ3 jest klasą określającą typ wyjątku
*/

class typ3: public typ{
public:
    typ3():typ(){_type=3;};
protected:
   
};

/**
*Klasa typ2 jest klasą określającą typ wyjątku
*dziedziczy po klasie typ3
*/

class typ2:public typ3{
public:
    typ2():typ3(){_type=2;};
protected:
   
};


