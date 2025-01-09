#include <iostream>
#include <string>
#include <array>
#include <chrono>
#include <thread>

//#include <SFML/Graphics.hpp>

//#include <Helper.h>
#include "env_fixes.h"
#include "headers/Car.h"
#include "headers/Motorbike.h"
#include "headers/PaintStation.h"
#include "headers/AssemblyLine.h"
using std::cout;
using std::cin;
using std::string;

int main(){
    std::unique_ptr<Vehicle>M1=std::make_unique<Car>("Dacia","Duster",2020);
    M1->What();
    Car M2=Car("Volkswagen","Beetle",1930);
    M2.What();
    PaintStation station1=PaintStation({"Red","Blue","Green"},0.5);
    station1.showAvailableColors();
    station1.setCurrentColor("Red");
    station1.paintVehicle(*M1);

    AssemblyLine assembly1=AssemblyLine(1);
    assembly1.addVehicle(std::move(M1));
    assembly1.displayVehicles();
    //cout<<station1;
    return 0;
}
