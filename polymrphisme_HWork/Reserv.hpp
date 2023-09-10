#include <iostream>

class Reserv{
std::string name;
int price;
int count;
int days;
public:
    Reserv();
    Reserv(const Reserv& oth);
    Reserv& operator=(const Reserv& oth);
    int total_price() const;
    ~Reserv();
}