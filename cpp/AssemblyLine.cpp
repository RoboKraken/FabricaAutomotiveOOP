//
// Created by Robert on 08/01/2025.
//
#include "../headers/AssemblyLine.h"

AssemblyLine::AssemblyLine(int nr) {
    this->LineNr = nr;
}
void AssemblyLine::addVehicle(std::unique_ptr<Vehicle> vehicle){
    vehicles.push_back(std::move(vehicle));
}
void AssemblyLine::removeVehicles(){
    vehicles.clear();
}
void AssemblyLine::displayVehicles(){
    std::cout << "Vehicles on the assembly line:\n";
    for (int i=0;i<vehicles.size();++i){
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

