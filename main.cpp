#include <iostream>
#include <string>
#include <array>
#include <chrono>
#include <thread>

//#include <SFML/Graphics.hpp>

//#include <Helper.h>
#include "env_fixes.h"

class Vehicle {
public:

    void what(){
        std::cout<<"I'm a vehicle";
    }

private:
    char licensePlate[8];

};

class Masina : public Vehicle{
    private:
    const int nrRoti=4;
    std::string brand;
    std::string model;
    int year;
    public:
        void what(){
            std::cout<<"I'm a "<<brand<<" model "<<model<<" fabricated in "<<year;
        };
        Masina(std::string,std::string,int);
        ~Masina();
};
Masina::Masina(const std::string,const std::string,int year){
    this->brand=brand;
    this->model=model;
    this->year=year;
}
Masina::~Masina(){}
class Motorbike : public Vehicle{
    private:
    const int nrRoti=2;
    std::string brand;
    std::string model;
    int year;

    public:
        void what(){
            std::cout<<"I'm a "<<brand<<" model "<<model<<" fabricated in "<<year;
        }
        Motorbike(std::string,std::string,int);
        ~Motorbike();
};
Motorbike::Motorbike(std::string brand,std::string model,int year){
    this->brand=brand;
    this->model=model;
    this->year=year;
}
Motorbike::~Motorbike(){}
int main(){
    Masina M1= Masina("Dacia","Duster",2020);
    M1.what();
    return 0;
}
