#include <iostream>

class Travel{
int cost;
Reserv* ptr;
public:
    Travel();
    Travel();
    Travel(const Travel& oth);
    Travel& operator=(const Travel& oth);
    ~Travel();
}