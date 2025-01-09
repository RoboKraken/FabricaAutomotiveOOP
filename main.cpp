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
#include "headers/VehicleInvalidExc.h"
#include "headers/AssemblyExc.h"
#include "headers/PaintStExc.h"
#include "headers/Exception.h"

#include "headers/Truck.h"
#include "headers/Vehicle.h"
using std::cout;
using std::cin;
using std::string;
using std::cerr;

int main(){
    try {

        std::unique_ptr<Vehicle>M1=std::make_unique<Car>("Dacia","Duster",2020);

        M1->What();
        Car M2=Car("Volkswagen","Beetle",1930);
        M2.What();
        Truck T1=Truck("Ford","Fusion",2010);
        //cout<<T1;
        PaintStation station1=PaintStation({"Red","Blue","Green"},1);
        station1.showAvailableColors();
        station1.setCurrentColor("Red");
        station1.paintVehicle(*M1);
        int currentYear=2025;
        std::cout<<"Depreciation: $"<< M1->getDepreciation(currentYear)<<"\n";
        AssemblyLine assembly1=AssemblyLine(1);
        assembly1.addVehicle(std::move(M1));
        //assembly1.addVehicle(nullptr);
        assembly1.displayVehicles();
    }
    catch (const VehicleInvalidExc& e) {
        cerr<<"Invalid vehicle: "<<e.what()<<"\n";
    }
    catch (const PaintStExc& e) {
        cerr<<"Paintstation error: "<<e.what()<<"\n";
    }
    catch (const AssemblyExc& e) {
        cerr<<"Assembly Line error: "<<e.what()<<"\n";
    }
    catch (const std::exception& e) {
        cerr<<"Standard error: "<<e.what()<<"\n";
    }
    catch (...) {
        cerr<<"Unknown exception\n";
    }
    //cout<<station1;


    return 0;
}
