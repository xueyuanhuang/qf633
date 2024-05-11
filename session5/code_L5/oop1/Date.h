#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date{
public:
    int year;
    int month;
    int day;
    Date(int y, int m, int d): year(y), month(m), day(d){};
    Date(){};
};

std::ostream& operator<<(std::ostream& os, const Date& date);
std::istream& operator>>(std::istream& is, Date& date);


#endif