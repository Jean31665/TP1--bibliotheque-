#include<iostream>
#include "Date.h"

int main(){
    Date d(05, 06, 2022);
    std::cout << "La date est: " << d.month() <<"/"<< d.day() <<"/"<< d.year() << std::endl;
    d.updateMonth(04);
    std::cout << "La date est: " << d.month() <<"/"<< d.day() <<"/"<< d.year() << std::endl;
    d.updateMonth(00);
    std::cout << "La date est: " << d.month() <<"/"<< d.day() <<"/"<< d.year() << std::endl;
    return 0;
}