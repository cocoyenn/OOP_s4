#pragma once

#include "Typy.h"
#include "ObiektMiotajacy.h"
#include <iostream>


void Przetworz(typ * wyjatek){
    std::cout<<"Przetworz - wyjatek typu "<< wyjatek->GetType()<<" o adresie: "<<wyjatek->GetAdress() <<std::endl;
    throw dynamic_cast<typ3 *>(wyjatek);
}


