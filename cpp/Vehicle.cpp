//
// Created by Robert on 09/01/2025.
//
#include "../headers/Vehicle.h"

std::ostream& operator<<(std::ostream& os,Vehicle& vehic) {
    os<<"Number: "<<vehic.LicensePlate<<"\n";
    return os;
};