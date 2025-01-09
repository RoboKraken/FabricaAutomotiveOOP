//
// Created by Robert on 09/01/2025.
//

#ifndef VEHICLEINVALIDEXC_H
#define VEHICLEINVALIDEXC_H
#include "Exception.h"
#include <string>

class VehicleInvalidExc:public Exception {
public:explicit VehicleInvalidExc(const std::string& msg):Exception(":(Invalid vehile:"+ msg){}
};
#endif //VEHICLEINVALIDEXC_H
