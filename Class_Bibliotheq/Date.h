#pragma once
#include<iostream>
#include<ctime>


class Date{
    public:
    Date(int month=1, int day=1, int year=2022);
    int month() const;
    int day() const;
    int year() const;
    bool isDate(int month, int day, int year);
    void updateMonth(int month);
    void updateDay(int day);
    void updateYear(int year);
    
    private:
    int _month;
    int _day;
    int _year;

};
std::string toString(Date d);
Date dateAjd();

