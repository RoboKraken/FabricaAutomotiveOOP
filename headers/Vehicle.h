//
// Created by Robert on 08/01/2025.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

#include "PaintStation.h"

class Vehicle {
public:

    virtual void What() const{
        std::cout<<"I'm a vehicle\n";
    }
    double getDepreciation(int currentYear)const{
        return calcDepreciation(currentYear);
    }
    void setColor(const std::string& color) {
        Color = color;
    }
    friend std::ostream& operator<<(std::ostream& os, Vehicle& vehicle);
    //friend PaintStation;
private:
    std::string LicensePlate;
    std::string Color;
protected:
    virtual double calcDepreciation(int currentYear)const=0;
};

#endif //VEHICLE_H
