#ifndef MARKET_H
#define MARKET_H

#include "Date.h"
#include <fstream>
#include <vector>
#include <unordered_map>

class RateCurve{
public:
    RateCurve(){};
    RateCurve(const std::string& _name):name(_name){};
    void addRate(const Date& tenor, double rate);
    void display() const;
private:
    std::string name;
    std::vector<Date> tenors;
    std::vector<double> rates;
};


class VolCurve{
public:
    VolCurve(){}
    VolCurve(const std::string& _name):name(_name){}
    void addVol(const Date& tenor, double rate);
    void display() const;
private:
    std::string name;
    std::vector<Date> tenors;
    std::vector<double> vols;
};

class Market{
public:
    Date asOf;
    Market(){}
    Market(const Date& now): asOf(now){}
    void Print() const;
    // void addBondPrice(const std::string& bondName, double price);
    void readMarket();
    void addRateCurve(const std::string& rateCurveName, const RateCurve& rateCurve);
    void addVolCurve(const std::string& volCurveName, const VolCurve& volCurve);

private:
    std::unordered_map<std::string, double> bondPrices;
    std::unordered_map<std::string, double> stockPrices;
    std::unordered_map<std::string, RateCurve> rateCurves;
    std::unordered_map<std::string, VolCurve> volCurves;
};

// std::ostream& operator<<(std::ostream& os, const Market& mkt);
// std::istream& operator>>(std::istream& is, Market& mkt);

#endif