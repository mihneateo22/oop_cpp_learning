#include <iostream>

using namespace std;

void byPointer(int *a) {
    *a = 100;
}

int main() {
    int x;
    byPointer(&x);
    cout << x << endl;
    return 0;
}