//
// Created by Robert on 09/01/2025.
//

#include "../headers/Truck.h"
std::ostream& operator<<(std::ostream& os, Truck& truck) {
    os<<"brand: "<<truck.brand<<"\n";
    return os;
};
Truck::Truck(std::string brand,std::string model,int year){
    this->brand=brand;
    this->model=model;
    this->Year=year;
}
Truck::~Truck(){}