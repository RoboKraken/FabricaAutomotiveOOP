//
// Created by Robert on 08/01/2025.
//

#ifndef FACTORYEXCEPTION_H
#define FACTORYEXCEPTION_H
#include <exception>
#include <string>

class FactoryException:public std::exception {
protected:
    std::string error;
public:
    explicit FactoryException(const std::string& error): message(msg){}


};
#endif //FACTORYEXCEPTION_H
