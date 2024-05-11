#include "Market.h"


// std::ostream& operator<<(std::ostream& os, const Market& mkt){
//     os << mkt.asOf;
//     return os;
// }

// std::istream& operator>>(std::istream& is, Market& mkt){
//     is >> mkt.asOf;
//     return is;
// }

void Market::readMarket(){
    std::ifstream bondPricesIn("bondPrices.txt");
    if(bondPricesIn){
        std::string bondName;
        double bondPrice;
        while(bondPricesIn >> bondName >> bondPrice){
            this->bondPrices[bondName] = bondPrice;
        }
    }else{
        std::cerr << "error for opening for bondPrices.txt" << std::endl;
    }

    std::ifstream stockPricesIn("stockPrices.txt");
    if(stockPricesIn){
        std::string stockName;
        double stockPrice;
        while(stockPricesIn >> stockName >> stockPrice){
            this->stockPrices[stockName] = stockPrice;
        }
    }else{
        std::cerr << "error for opening for stocksPrices.txt" << std::endl;
    }
}

void Market::Print() const{
    std::cout << "maket asof: " << asOf << std::endl;

    std::cout << "bondPrices:" << std::endl;
    for(auto bondPrice: bondPrices){
        std::cout << "Name:" << bondPrice.first << "->" << "Price:" << bondPrice.second << std::endl;
    }

    std::cout << "stockPrices:" << std::endl;
    for(auto stockPrice: stockPrices){
        std::cout << "Name:" << stockPrice.first << "->" << "Price:" << stockPrice.second << std::endl;
    }

    std::cout << "rate curve:" << std::endl;
    for(auto rateCurve: rateCurves){
        std::cout << "curveName:" << rateCurve.first << std::endl;
        rateCurve.second.display();
    }

    std::cout << "vol curve:" << std::endl;
    for(auto volCurve: volCurves){
        std::cout << "vol curve Name" << volCurve.first << std::endl;
        volCurve.second.display();
    }
}

void Market::addRateCurve(const std::string& rateCurveName, const RateCurve& rateCurve){
    rateCurves[rateCurveName] = rateCurve;
}

void Market::addVolCurve(const std::string& volCurveName, const VolCurve& volCurve){
    volCurves[volCurveName] = volCurve;
}

void RateCurve::addRate(const Date& tenor, double rate){
    tenors.push_back(tenor);
    rates.push_back(rate);
}

void RateCurve::display() const {
    std::cout << "RateCurve Name:" << name << std::endl;
    for(size_t i = 0; i < tenors.size(); i++){
        std::cout << tenors[i] << ":" << rates[i] << std::endl;
    }
}

void VolCurve::addVol(const Date& tenor, double vol){
    tenors.push_back(tenor);
    vols.push_back(vol);
}

void VolCurve::display() const {
    std::cout << "VolCurve Name:" << name << std::endl;
    for(size_t i = 0; i < tenors.size(); i++){
        std::cout << tenors[i] << ": " << vols[i] << std::endl;
    }
}
// void Market::addBondPrice(const std::string& bondName, double price){
//     bondPrices[bondName] = price;
// }