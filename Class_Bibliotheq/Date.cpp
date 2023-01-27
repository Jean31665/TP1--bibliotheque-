#include "Date.h"
#include<cassert>

Date::Date(int month, int day, int year){
    _month=month;
    _day=day;
    _year=year;
  bool status = isDate(month, day, year);
  //assert(status && "Date is not valid");
}

int Date::month() const{
    return _month;
}

int Date::day() const{
    return _day;
}

int Date::year() const{
    return _year;
}

bool Date::isDate(int month, int day, int year){
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||(month == 9) || (month == 11)) && (day > 30)) return false;
    if((year < 1800) || (year > 2023)) return false;
    return true;
}

void Date::updateMonth(int month){
    _month=month;
}

void Date::updateDay(int day){
    _day=day;
}

void Date::updateYear(int year){
    _year=year;
}

std::string toString(Date d) {
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) + "/" + std::to_string(d.year());
}

Date dateAjd(){

    time_t actuel = time(0);
    tm *ltm = localtime(&actuel);
    Date d1(1 + ltm->tm_mon, ltm->tm_mday, 1900 + ltm->tm_year);

    return d1;
}