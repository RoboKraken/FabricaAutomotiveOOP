//
// Created by Robert on 08/01/2025.
//

#ifndef ASSEMBLYLINE_H
#define ASSEMBLYLINE_H
#include <memory>
#include <vector>
#include "Vehicle.h"
/**
 * @class AssemblyLine
 * @brief This class represents a physical production line in the factory
 *
 * The class provides functions that interact with the production line for easy management
 */
class AssemblyLine {
private:
    int LineNr;
    std::vector<std::unique_ptr<Vehicle>> vehicles;
public:
    void what(){
        std::cout<<"I'm production line Mc production face and my number is"<<LineNr<<"\n";
    };
    AssemblyLine(int);
    void addVehicle(std::unique_ptr<Vehicle>);
    void removeVehicles();
    void displayVehicles();
    ~AssemblyLine();
    friend std::ostream& operator<<(std::ostream& os, AssemblyLine& line);
};

#endif