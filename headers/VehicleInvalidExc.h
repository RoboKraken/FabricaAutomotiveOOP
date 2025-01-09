//
// Created by Robert on 09/01/2025.
//

#ifndef VEHICLEINVALIDEXC_H
#define VEHICLEINVALIDEXC_H
#include <exception>
#include <string>

class VehicleInvalidExc:public std::exception {
public:explicit VehicleInvalidExc(const std::string& message):Exception(":(Invalid vehile:"+msg){}
};
#endif //VEHICLEINVALIDEXC_H
