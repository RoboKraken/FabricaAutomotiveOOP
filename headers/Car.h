//
// Created by Robert on 08/01/2025.
//
#include <iostream>
#include <string>
#include "Vehicle.h"
/**
 * @class Car
 * @brief This is a type of vehicle
 *
 * It's an inherited class from Vehicle that provides functionality specific to a car
 */
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
protected:
    double calcDepreciation(int currentYear)const override{
        double age=currentYear-Year;
        return age *1000; //Scade in valoare
    }
};
#endif //CAR_H
