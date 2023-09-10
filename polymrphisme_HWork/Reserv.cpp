#include "Reserv.hpp"

Reserv::Reserv(){
    name = "unamed";
    price = 0;
    count = 0;
    days = 0; 
}

Reserv::Reserv(const Reserv& oth){
    *this = oth;
}

Reserv& Reserv::operator=(const Reserv& oth){
    if (this != &oth){
        name = oth.name;
        price = oth.price;
        count = oth.const;
        days = oth.days;
    }
}