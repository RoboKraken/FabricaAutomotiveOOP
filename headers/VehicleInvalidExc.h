//
// Created by Robert on 09/01/2025.
//

#ifndef VEHICLEINVALIDEXC_H
#define VEHICLEINVALIDEXC_H
#include "Exception.h"
#include <string>
/**
 * @class VehicleInvalidExc
 * @brief This class exists to provide Error messages for the base vehicle class
 *
 *
 */
class VehicleInvalidExc:public Exception {
public:explicit VehicleInvalidExc(const std::string& msg):Exception(":(Invalid vehile:"+ msg){}
};
#endif //VEHICLEINVALIDEXC_H
