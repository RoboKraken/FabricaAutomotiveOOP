//
// Created by Robert on 08/01/2025.
//
/**
 * @file Car.cpp
 * @brief Defines the car functions
 */
#include "../headers/Car.h"
std::ostream& operator<<(std::ostream& os, Car& car) {
    os<<"brand: "<<car.brand<<"\n";
    return os;
};
Car::Car(const Car& other) : brand(other.brand), model(other.model), Year(other.Year) {}
Car::Car(const std::string brand,const std::string model,int Year){
    this->brand=brand;
    this->model=model;
    this->Year=Year;
}
Car& Car::operator=(const Car& second) {
    if (this == &second) {
        return *this;
    }
    this->brand = second.brand;
    this->model = second.model;
    this->Year = second.Year;
    return *this;
}
Car::~Car(){}