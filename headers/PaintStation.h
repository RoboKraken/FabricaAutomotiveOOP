//
// Created by Robert on 08/01/2025.
//

#ifndef PAINTSTATION_H
#define PAINTSTATION_H

#include <vector>
#include <string>
#include <iostream>
#include "Vehicle.h"
#include "FactoryObserver.h"
/**
 * @class PaintStation
 * @brief An add-on to the factory
 *
 * It's a class that provides specific functions to paint vehicles
 */
class Vehicle;
class PaintStation{
private:
    std::vector<std::string> availableColors;
    std::string currentColor;
    int processingTime; //Trebuie asteptat cand se picteaza:)
public:
    PaintStation(const std::vector<std::string>& colors,int time);//Setam timp de asteptare
    void addColor(const std::string& newColor);
    void showAvailableColors()const;
    void setCurrentColor(const std::string& color);
    void paintVehicle(Vehicle& vehicle);
    friend std::ostream& operator<<(std::ostream& os, const PaintStation& station);
};


#endif //PAINTSTATION_H
