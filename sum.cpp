#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;
    cout << "Type in the number of elements in the vector: ";
    cin >> n;

    int *v = new int[n];

    cout << "Type in each element in the vector: ";
    for(int i = 0; i < n; i ++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        suma += v[i];
    }

    delete[] v;
    v = NULL;

    cout << "The sum of the numbers in the vector is : " << suma << endl;
    return 0;
}