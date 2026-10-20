#include <iostream>

using namespace std;

// USUAL RULE : data PRIVATE, methods PUBLIC

class Mediu {
    float temp; // private by default
    //same as:
    /*
    private:
        float temp 
    */

    public: // everything from here can be used from outside the class
        void afiseazaTemp() const;      // declarations only
        void schimbaTemp(float = 0);
        float aflaTemp() const;
};

void Mediu::schimbaTemp(float newTemp) {
    temp = newTemp;
}

void Mediu::afiseazaTemp() const {
    cout << "Temperatura medie: " << temp << endl;
}

float Mediu::aflaTemp() const {
    return temp;
}


int main() {
    Mediu m; // create an object (instantiere)!!!
    m.schimbaTemp(27.1);    // send a message
    float t = m.aflaTemp(); // send a request
    cout << t << endl;
    m.afiseazaTemp();

    Mediu *pm = &m; // pointer to the object created at line 33
    pm->schimbaTemp(); // because pm is a pointer; uses the default value 0
    pm->afiseazaTemp();
    //m.temp = 5;       //ERROR: 'float Mediu::temp' is private within this context
    return 0;
}