#include <iostream>

using namespace std;

int produs(int x = 1, int y = 2) {
    return x + y;
}

int main() {
    cout << "With default parameters: " << produs() << endl;
    cout << "With default parameter just for y: " << produs(5) << endl;
    return 0;
}