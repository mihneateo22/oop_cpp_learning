#include <iostream>

using namespace std;

class Mediu {
    private:
        float temp;

    public:
        void schimbaTemp(float t) {
            temp = t;
        }
        float aflaTemp() const { // const method : promises not to change the object
            return temp;
        }
};

float suma(const float &a, const float &b) { // const refrences: no copy, read-only
    return a + b;    
}

int main() {
    const int n = 3; // const variable: gets a value now, can never change

    int a = 1, b = 2;
    int* const cPtr = &a; // const pointer: the ADDRESS in it is fixed
    *cPtr = 10;           // BUT the value CAN CHANGE

    const int* ptr2C = &a; // pointer to const: the VALUE can't be changed through it
    ptr2C = &b;            // BUT it can point SOMWHERE else

    Mediu m;
    m.schimbaTemp(25);
    cout << n << " " << a << " " << *ptr2C << " " << m.aflaTemp() << " " << suma(1.5, 2) << endl;
    return 0;
}