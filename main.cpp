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

using std::cout;
using std::cin;
using std::string;

int main(){
    Car M1= Car("Dacia","Duster",2020);
    M1.What();
    cout<<M1;
    return 0;
}
