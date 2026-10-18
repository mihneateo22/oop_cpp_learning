#include <iostream>

using namespace std;

void without_chaning_in_main(int number, int value) { number += value; }
void with_changing_in_main(int &number, int value) { number += value; }
void with_pointer(int *numar, int value) { *numar += value; }

int main() {
    int x = 10;

    without_chaning_in_main(x, 10);
    cout << "Without changing the value of x, it is equal to: " << x << endl; // printing 10

    with_changing_in_main(x, 10);
    cout << "With changing the value of x, it is equal to: " << x << endl; // printing 20

    with_pointer(&x, 10);
    cout << "With pointer, the value of x is: " << x << endl; // printing 30

    return 0;
}
