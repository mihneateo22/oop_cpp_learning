#include <iostream>

using namespace std;

void majoreaza(int &ref, int val) { // ref is hte caller's variable, not a copy
    ref += val;
}

int main() {
    int x = 3;
    int &ref = x; // ref is another name for x // like a pointer, but this can not change, it will stay linked to x
    // int &ref ---> this is an ERROR. a refrence must be initialized when is created
    
    ref = 5;    // changes x
    cout << x << endl;
    cout << (&ref == &x) << endl; // same address: IT IS THE SAME VARIABLE

    int z = 2;
    ref = z;    // DOES NOT make ref refer to z: it copies 2 into x
    z++;
    
    cout << x << " " << ref << " " << z << endl;
    majoreaza(x, 5);        // inside majoreaza, ref is x
    cout << x << endl;
    return 0;
}