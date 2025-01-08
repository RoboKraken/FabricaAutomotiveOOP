//
// Created by Robert on 08/01/2025.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
class Vehicle {
public:

    void What(){
        std::cout<<"I'm a vehicle\n";
    }

private:
    std::string LicensePlate[8];
};
#endif //VEHICLE_H
