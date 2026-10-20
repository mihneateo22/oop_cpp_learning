#include <iostream>

using namespace std;

// FOUR(4) SITUATIONS WHERE YOU WRITE THIS EXPLICITLY: 

// 1)
// A PARAMETER HAST THE SAME NAME AS AN ATTRIBUTE

class Shadow {
    private:
        int x;

    public:
        void assign(int x) {
            this->x = x; // this->x = the object's attribute, x = the parameter
        }
};

// 2)
// CLARITY. IT MAKES IT OBVIOUS WHICH VARIABLES ARE ATTRIBUTES AND WHICH ARE LOCAL

/*
void operations(int x, int y) {
    int b, c;
    this->alfa = 2 * x;     // clearly and attribute
    b = this->alfa + y;     // b is clearly local
    c = b * x;
    this->beta = b + c;
}
*/

// 3)
// THE OBJECT ITSELF, TO CHAIN CALLS. 
// this is the addres; *this is the object. A method that returns *this by reference
// returns the object itself, so you can call another method on the result.

class Chain {
    private:
        int x, y;
    
    public:
        Chain& setX(int x) {
            this->x = x;
            return *this;   // return the object itself (not a copy, because of the &)
        }

        Chain& setY(int y) {
            this->y = y;
            return *this;
        }

        void afiseaza() const {
            cout << x << " " << y << endl;
        }
};

// 4)
// THE METHOD NEEDS THE OBJECT'S NAME OR ADDRESS.
// for example, to pass the object to another function:
// f(*this);
// or to compare if (this == &other)

int main() {
    Chain c;
    c.setX(1).setY(2);  // setX returns c, then .setY(2) is called on c
    c.afiseaza();
    return 0;
}