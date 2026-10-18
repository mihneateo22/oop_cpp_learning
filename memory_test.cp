#include <iostream>

using namespace std;

void f(int a, int &b, int *c) {
    a = a + 10;
    b = b + 10;
    *c = *c + 10;
}

int main() {
    int x = 1, y = 2, z = 3;
    int &r = x;
    r = y;
    y = 100;
    f(x, r, &z);
    cout << x << " " << y << " " << z << " " << r << endl;
    return 0;
}