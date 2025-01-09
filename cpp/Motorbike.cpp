//
// Created by Robert on 08/01/2025.
//
/**
 * @file Motorbike.cpp
 * @brief Defines the motorbike functions
 */
#include "../headers/Motorbike.h"
std::ostream& operator<<(std::ostream& os, Motorbike& motorbike) {
    os<<"brand: "<<motorbike.brand<<"\n";
    return os;
};
Motorbike::Motorbike(std::string brand,std::string model,int year){
    this->brand=brand;
    this->model=model;
    this->Year=year;
}
Motorbike::~Motorbike(){}