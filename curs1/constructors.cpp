#include <iostream>

using namespace std;

// DIFFERENT TYPES OF CONSTRUCTORS

class Mediu {
    private:
        float temp;
        int pres;
    public:
        Mediu();    // default constructor (no parameters)
        Mediu(float t); // constructor with 1 parameter
        Mediu(float t, int p); // constructor with 2 params
        void afiseaza() const;
};

Mediu::Mediu() {    // same name as class, NO return type
    temp = 20;
    pres = 1013;
    cout << "ctor fara parametri" << endl;
}

Mediu::Mediu(float t) {
    temp = t;
    pres = 1013;
    cout << "ctor cu 1 parametru" << endl;
}

Mediu::Mediu(float t, int p) {
    temp = t;
    if (p > 0) pres = p;    // validation
    else pres = 1013;
    cout << "ctor cu 2 parametrii" << endl;
}

void Mediu::afiseaza() const {
    cout << "temp = " << temp << ", pres = " << pres << endl;
}

int main() {
    Mediu m1;   // the constructor runs here, by itself
    Mediu m2(36.6);
    Mediu m3(25, 900); 
    Mediu *m4 = new Mediu(30); // the constructor also runs for objects on the heap
    
    m1.afiseaza();
    m2.afiseaza();
    m3.afiseaza();
    m4->afiseaza();

    delete m4;
    m4 = NULL;
    return 0;
}