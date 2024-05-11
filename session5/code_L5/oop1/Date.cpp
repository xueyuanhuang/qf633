#include "Date.h"

std::ostream& operator<<(std::ostream& os, const Date& date){
    os << date.year << " " << date.month << " " << date.day;

    return os;
}

std::istream& operator>>(std::istream& is, Date& date){
    is >> date.year >> date.month >> date.day;

    return is;
}