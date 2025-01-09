//
// Created by Robert on 08/01/2025.
//
#include "../headers/AssemblyLine.h"
#include "../headers/AssemblyExc.h"
/**
 * @file AssemblyLine.cpp
 * @brief Defines the assembly line functions
 */
AssemblyLine::AssemblyLine(int nr) {
    this->LineNr = nr;
}
/**
 * @brief Adds a specific vehicle model to the assembly line
 * @param vehicle is the vehicle pointer we want to add, we should use std::move() to transfer ownership
 * @return void
 */
void AssemblyLine::addVehicle(std::unique_ptr<Vehicle> vehicle){
    if (!vehicle) {
        throw AssemblyExc("Attempted to add a null ptr:(");
    }
    vehicles.push_back(std::move(vehicle));
}
/**
 * @brief Removes all vehicles on the assembly line
 * @return void
 */
void AssemblyLine::removeVehicles(){
    vehicles.clear();
}
/**
 * @brief Displays all vehicles being assembled on an assembly line
 * @return void
 */
void AssemblyLine::displayVehicles(){
    std::cout << "Vehicles on the assembly line:\n";
    for (auto i=0u;i<vehicles.size();++i){
        vehicles[i]->What();
        std::cout<<" -- ";
    }
    std::cout<<"\n";
}
std::ostream& operator<<(std::ostream& os, AssemblyLine& AssemblyLine) {
    os<<"line: "<<AssemblyLine.LineNr<<"\n";
    return os;
}
AssemblyLine::~AssemblyLine() {

}

