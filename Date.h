#include<iostream>
class Date{
    public:
    Date(int month=1, int day=1, int year=2022);
    int month() const;
    int day() const;
    int year() const;
    bool isDate(int month, int day, int year);
    int updateMonth(int month);
    int updateDay(int day);
    int updateYear(int year);
    
    private:
    int _month;
    int _day;
    int _year;

};