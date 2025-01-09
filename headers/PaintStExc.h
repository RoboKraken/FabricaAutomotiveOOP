//
// Created by Robert on 09/01/2025.
//

#ifndef PAINTSTEXC_H
#define PAINTSTEXC_H
#include "Exception.h"
#include <string>

class PaintStExc:Exception {
public:explicit PaintStExc(const std::string& msg):Exception(":(Painting error:"+msg){}
};
#endif //PAINTSTEXC_H
