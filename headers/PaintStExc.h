//
// Created by Robert on 09/01/2025.
//

#ifndef PAINTSTEXC_H
#define PAINTSTEXC_H
#include <exception>
#include <string>

class PaintStExc:public std::exception {
public:explicit PaintStExc(const std::string& message):Exception(":(Painting error:"+msg){}
};
#endif //PAINTSTEXC_H
