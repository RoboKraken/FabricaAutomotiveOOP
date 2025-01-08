//
// Created by Robert on 08/01/2025.
//
#include "../headers/PaintStation.h"
#include <chrono>
#include <thread>
std::ostream& operator<<(std::ostream& os, const PaintStation& station) {
    os << "Paint station color="<<station.currentColor<<"\n";
    return os;
}
void PaintStation::paintVehicle(Vehicle& vehicle) const {
    std::cout<<"Painting vehicle with color: "<< currentColor<<"...\n";
    std::this_thread::sleep_for(std::chrono::seconds(processingTime));//Haha, uite astepti lol:))
    std::cout << "Vehicle successfully painted " << currentColor << "!\n";
}
PaintStation::PaintStation(const std::vector<std::string>& colors, int time)
    : availableColors(colors), currentColor(colors.empty() ? "None" : colors[0]), processingTime(time) {}

void PaintStation::showAvailableColors() const {
    std::cout<<"colors:";
    for (const auto& color : availableColors) {
        std::cout<<color<<" ";
    }
    std::cout << std::endl;
}

void PaintStation::addColor(const std::string& newColor) {
    //check
    if (std::find(availableColors.begin(), availableColors.end(), newColor) != availableColors.end()) {
        std::cout<<"color"<<newColor<<" alrady exists\n";
        return;
    }
    availableColors.push_back(newColor);
    std::cout <<"Color "<<newColor<<" added to paint reserves in station"<<"\n";
}
void PaintStation::setCurrentColor(const std::string& color) {
    if (std::find(availableColors.begin(), availableColors.end(), color) != availableColors.end()) {
        currentColor=color;
        std::cout<<"Paint station color set:"<<currentColor <<"\n";
    }
    else{
        std::cout<< "Color not available in the paint station!!!:((\n";
    }
}