//
// Created by Robert on 08/01/2025.
//

#include <iostream>
#include <string>
#include "Vehicle.h"
#ifndef MOTORBIKE_H
#define MOTORBIKE_H
class Motorbike : public Vehicle{
private:
    const int WheelNr=2;
    std::string brand;
    std::string model;
    int Year;

public:
    void What() const override{
        std::cout<<"I'm a "<<brand<<" model "<<model<<" fabricated in "<<Year<<"\n";
    }
    Motorbike(const Motorbike& copy);
    Motorbike(std::string,std::string,int Yearear);
    ~Motorbike();
    friend std::ostream& operator<<(std::ostream& os, Motorbike& motorbike);
protected:
    double calcDepreciation(int currentYear)const override{
        double age=currentYear-Year;
        return age *800; //Scade in valoare
    }
};
#endif //MOTORBIKE_H
