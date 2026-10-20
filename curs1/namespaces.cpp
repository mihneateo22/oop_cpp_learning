#include <iostream>

using namespace std;

// definition of a namespace :
// named region that groups declarations, so names from diff libraries don't clash

namespace first {
    int x = 5;
    int y = 2;
}

namespace second {
    double x = 3.1;
    double y = 3.2;
}

int main() {
    using namespace first; // from here on, x and y mean first::x and first::y
    cout << x << endl;  // first::x
    cout << second::x << endl;  // second's x, named explicitly
    cout << y + second::y << endl; // first::y + second::y
    return 0;
}