#include <iostream>
#include <array>
#include <chrono>
#include <thread>

//#include <SFML/Graphics.hpp>

//#include <Helper.h>
#include "env_fixes.h" 
using namespace std;

class Vehicul {
public:

    void ceSunt(){
        cout<<"Sunt un vehicul";
    }

private:
    char numarInmatric[8];

};

class Masina : public Vehicul{
    private:
    const int nrRoti=4;
    const char brand[40];
    const char model[40];
    int an;
    public:
        void ceSunt(){
        cout<<"Sunt o masina "<<brand<<" model "<<model<<" fabricata in "<<an;
        };
        Masina(const char[40],const char[40],int);
        ~Masina();
};

class Motocicleta : public Vehicul{
    private:
    const int nrRoti=2;
    const char brand[40];
    const char model[40];
    int an;

    public:
        void ceSunt(){
        cout<<"Sunt o motocicleta "<<brand<<" model "<<model<<" fabricata in "<<an;
        }
        Motocicleta(const char[40],const char[40],int);
        ~Motocicleta();
};

int main(){
    Masina M1= Masina("Dacia","Duster",2020);
    M1.ceSunt();
    return 0;
}
