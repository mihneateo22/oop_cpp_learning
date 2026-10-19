#include <iostream>
using namespace std;

class Mediu {
    float temp;                       // private by default: only Mediu's methods can touch it

public:                               // everything below is visible from outside
    void schimbaTemp(float = 0);      // declaration only; default value goes HERE
    void afiseazaTemp() const;
    float aflaTemp() const;           // const = promises not to modify the object
};

void Mediu::schimbaTemp(float newTemp) {   // Mediu:: = "this function belongs to Mediu"
    temp = newTemp;                         // temp = the temp of the object that called
}

void Mediu::afiseazaTemp() const {
    cout << "Temperatura mediu: " << temp << endl;
}

float Mediu::aflaTemp() const {
    return temp;
}

int main() {
    Mediu m;                  // create an object (instantiere)
    m.schimbaTemp(27.1);      // send a message to m
    m.afiseazaTemp();

    float t = m.aflaTemp();   // ask m for its value
    cout << t << endl;

    m.schimbaTemp();          // uses the default value 0
    m.afiseazaTemp();

    Mediu *pm = &m;           // pointer to the object
    pm->schimbaTemp(30);      // -> because pm is a pointer
    m.afiseazaTemp();
    // m.temp = 5;            // ERROR: temp is private
    return 0;
}