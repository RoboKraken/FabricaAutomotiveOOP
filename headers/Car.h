//
// Created by Robert on 08/01/2025.
//
#include <iostream>
#include <string>
#include "Vehicle.h"

#ifndef CAR_H
#define CAR_H
class Car : public Vehicle{
private:
    const int WheelNr=4;
    std::string brand;
    std::string model;
    int Year;
public:
    void What() const override{
        std::cout<<"I'm a "<<brand<<" model "<<model<<" fabricated in "<<Year<<"\n";
    };
    Car(const Car& copy);
    Car(std::string,std::string,int);
    ~Car();
    friend std::ostream& operator<<(std::ostream& os, Car& car);
    Car& operator=(const Car& other);
};
#endif //CAR_H
