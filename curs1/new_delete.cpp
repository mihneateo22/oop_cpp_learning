#include <iostream>

using namespace std;

class Mediu {
    private: 
        float temp;

    public:
        void schimbaTemp(float t) { temp = t; }
        float aflaTemp() const { return temp; }
};

// IMPORTANT TO KNOW: 
/* 
    Modern C++:
        nullptr replaces NULL
        std::vector replaces new[]/delete[]
*/

int main() {
    int *p1 = new int;   // one int on the HEAP, NOT initialized (garbage)
    int *p2 = new int(3); // one int on the HEAP, initialized with 3
    *p1 = 10;   // give p1's int a value before reading it
    cout << *p1 + *p2 << endl;
    delete p1;  // free the memory
    p1 = NULL;  // avoid a "dangling pointer"
    delete p2; 
    p2 = NULL;

    Mediu *m = new Mediu; // one object on the HEAP
    m->schimbaTemp(25);   // -> because m is a pointer
    cout << m->aflaTemp() << endl;
    delete m;
    m = NULL;   // again, avoiding "dangling pointer" VERY IMPORTANT STEP!!

    int *vec = new int[20];   // an array of 20 ints on the heap
    for(int i = 0; i < 20; i ++) {
        vec[i] = i * i;
    }
    cout << vec[3] << endl; // the 4th element
    delete[] vec;   // [] because it was created with new[]
    vec = NULL;
    return 0;
}