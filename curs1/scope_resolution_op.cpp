#include <iostream>

using namespace std;

int x; // gloabal variable; global variables start at 0

void functie(int val) {
    int x = 0;  // local x: it "shadows" the global x inside this function
    ::x = val;  // ::x means the GLOBAL x
    cout << x << endl;  // prints the local x: 0
    x = ::x;    // the local x gets the global x's value
    cout << x << endl;  // 4
}

int main() {
    cout << x << endl; // the GLOBAL x: 0
    functie(4);
    cout << x << endl; // the gloabl x, changed by function 'functie' : 4
    return 0;
}