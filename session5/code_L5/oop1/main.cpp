#include <ctime>
#include "Market.h"

// void readFromFile(const std::string& fileName, std::string& input){
//     std::string lineText;
//     std::ifstream fin(fileName);
//     while(std::getline(fin, lineText)){
//         input.append(lineText);
//     }
//     fin.close();
// }

int main()
{
    // if(0){
    //     std::string curveInfo;
    //     readFromFile("curve.txt", curveInfo);
    //     std::cout << curveInfo;
    // }
    if (1)
    {
        // current time
        std::time_t t = std::time(0);
        auto now_ = std::localtime(&t);

        Date valueDate;
        valueDate.year = now_->tm_year + 1900;
        valueDate.month = now_->tm_mon + 1;
        valueDate.day = now_->tm_mday;

        Market mkt = Market(valueDate);

        mkt.readMarket();

        RateCurve rateCurve = RateCurve("USD-SOFR");
        rateCurve.addRate(Date(2024, 1, 1), 0.01);
        mkt.addRateCurve("curve1", rateCurve);

        VolCurve volCurve = VolCurve("SGD-SOFR");
        volCurve.addVol(Date(2024, 6, 11), 0.256);
        mkt.addVolCurve("volCurve", volCurve);

        mkt.Print();
    }

    if (0)
    {
        RateCurve rateCurve = RateCurve("USD-SOFR");
        rateCurve.addRate(Date(2024, 1, 1), 0.01);
        // rateCurve.display();
    }

    // if(0){
    //     std::ofstream fout("simpleMkt.dat");
    //     if(fout){
    //         std::time_t t = std::time(0);
    //         auto now_ = std::localtime(&t);
    //         Date date = Date(now_->tm_year + 1900,now_->tm_mon + 1,now_->tm_mday);
    //         Market mkt = Market(date);

    //         fout << mkt;
    //     }else{
    //         std::cerr << "something went worng!" << std::endl;
    //     }
    // }

    // if(1){
    //     std::ifstream fin("simpleMkt.dat");
    //     if(fin){
    //         Market mkt;
    //         fin >> mkt;
    //         mkt.Print();
    //     }else{
    //         std::cerr << "something went worng!" << std::endl;
    //     }
    // }

    // if(0){
    //     Market mkt;
    //     mkt.addBondPrice("111", 123);
    //     mkt.Print();
    // }

    return 0;
}