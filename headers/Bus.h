//
// Created by Robert on 09/01/2025.
//

#ifndef BUS_H
#define BUS_H
#include <iostream>
#include <string>
#include "Vehicle.h"
/**
 * @class Bus
 * @brief This is a type of vehicle
 *
 * It's an inherited class from Vehicle that provides functionality specific to a bus
 */
class Bus : public Vehicle{
private:
    int WheelNr=12;
    std::string brand;
    std::string model;
    int Year;

public:
    void What() const override{
        std::cout<<"I'm a "<<brand<<" model "<<model<<" fabricated in "<<Year<<"\n";
    }
    Bus(const Bus& copy);
    Bus(std::string,std::string,int Yearear);
    ~Bus();
    friend std::ostream& operator<<(std::ostream& os, Bus& Bus);
protected:
    double calcDepreciation(int currentYear)const override{
        double age=currentYear-Year;
        return age *1050; //Scade in valoare
    }
};
#endif //BUS_H
