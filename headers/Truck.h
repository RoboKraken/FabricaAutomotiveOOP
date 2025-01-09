//
// Created by Robert on 09/01/2025.
//

#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include <string>
#include "Vehicle.h"
/**
 * @class Truck
 * @brief This is a type of vehicle
 *
 * It's an inherited class from Vehicle that provides functionality specific to a truck
 */
class Truck : public Vehicle{
private:
    int WheelNr=18;
    int loadCapacity=20000;
    std::string brand;
    std::string model;
    int Year;

public:
    void What() const override{
        std::cout<<"I'm a "<<brand<<" truck, model "<<model<<" fabricated in "<<Year<<" with "<<WheelNr<<" wheels"<<"\n";
    }
    Truck(const Truck& copy);
    Truck(std::string,std::string,int Yearear);
    ~Truck();
    friend std::ostream& operator<<(std::ostream& os, Truck& truck);
protected:
    double calcDepreciation(int currentYear)const override{
        double age=currentYear-Year;
        return age *1200; //Scade in valoare
    }
};
#endif //TRUCK_H
