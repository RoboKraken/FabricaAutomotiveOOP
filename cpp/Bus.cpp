//
// Created by Robert on 09/01/2025.
//
/**
 * @file Bus.cpp
 * @brief Defines the bus functions
 */
#ifndef BUS_CPP
#define BUS_CPP
#include "../headers/Bus.h"
std::ostream& operator<<(std::ostream& os, Bus& Bus) {
    os<<"brand: "<<Bus.brand<<"\n";
    return os;
};
Bus::Bus(std::string brand,std::string model,int year){
    this->brand=brand;
    this->model=model;
    this->Year=year;
}
Bus::~Bus(){}
#endif //BUS_/cPP
