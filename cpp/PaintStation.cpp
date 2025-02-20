//
// Created by Robert on 08/01/2025.
//
#include "../headers/PaintStation.h"
#include <chrono>
#include <thread>
#include "../headers/Exception.h"
#include "../headers/PaintStExc.h"
/**
 * @file PaintStation.cpp
 * @brief Defines the paint station functions
 */
std::ostream& operator<<(std::ostream& os, const PaintStation& station) {
    os << "Paint station color="<<station.currentColor<<"\n";
    return os;
}
/**
 * @brief Paints a specific vehicle with the color selected in the paintstation
 * @param Vehicle&
 * @return void
 */
void PaintStation::paintVehicle(Vehicle& vehicle) {
    std::cout<<"Painting vehicle with color: "<< currentColor<<"...\n";
    std::this_thread::sleep_for(std::chrono::seconds(processingTime));//Haha, uite astepti lol:))
    vehicle.setColor(currentColor);
    std::cout << "Vehicle successfully painted " << currentColor << "!\n";
}

PaintStation::PaintStation(const std::vector<std::string>& colors, int time)
    : availableColors(colors), currentColor(colors.empty() ? "None" : colors[0]), processingTime(time) {}
/**
 * @brief Shows all available colors in the paintstation
 * @return void
 */
void PaintStation::showAvailableColors() const {
    std::cout<<"colors:";
    for (const auto& color : availableColors) {
        std::cout<<color<<" ";
    }
    std::cout << std::endl;
}
/**
 * @brief Adds a color to the paint station reserves
 * @param newColor the color that we want to add
 * @return void
 */
void PaintStation::addColor(const std::string& newColor) {
    //check
    if (std::find(availableColors.begin(), availableColors.end(), newColor) != availableColors.end()) {
        std::cout<<"color"<<newColor<<" alrady exists\n";
        return;
    }
    availableColors.push_back(newColor);
    std::cout <<"Color "<<newColor<<" added to paint reserves in station"<<"\n";
}

/**
 * @brief Sets the color that we want to use next
 * @param color the color we decided
 * @return void
 */
void PaintStation::setCurrentColor(const std::string& color) {
    if (std::find(availableColors.begin(), availableColors.end(), color) == availableColors.end()) {
        throw PaintStExc("Color is not available");
    }
    if (std::find(availableColors.begin(), availableColors.end(), color) != availableColors.end()) {
        currentColor=color;
        std::cout<<"Paint station color set:"<<currentColor <<"\n";
    }
    else{
        std::cout<< "Color not available in the paint station!!!:((\n";
    }
}