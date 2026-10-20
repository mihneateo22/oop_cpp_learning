#include <iostream>

using namespace std;

void afiseaza(int x) {
    cout << "int: " << x << endl;
}

void afiseaza(double x) {
    cout << "double: " << x << endl;
}

void afiseaza(int x, int y) {
    cout << "doi int: " << x << " " << y << endl;
}

int main() {
    afiseaza(3);
    afiseaza(3.5);
    afiseaza(1, 2); 
    return 0;
}

// several functions can share the name if their signatures differ.
// the compiler picks the right one by looking at the arguments.