#include <iostream>

using namespace std;

void interschimba_Varreferinta(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void interschimba_Varpointeri(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordoneaza_crescator_var_meh(int *a, int *b, int *c) {
    if (*a >= *b && *b >= *c){
        interschimba_Varpointeri(a, c);
    }
    else if (*a >= *b && *b <= *c) {
        if (*a >= *c) {
            interschimba_Varpointeri(a, b);
            interschimba_Varpointeri(b, c);
        }
        else interschimba_Varpointeri(a, b);
    }
    else if (*a <= *b && *b >= *c) {
        if (*a >= *c) {
            interschimba_Varpointeri(b, c);
            interschimba_Varpointeri(a, b);
        }
        else interschimba_Varpointeri(b, c);
    }
}

void ordoneaza_crescator_mielenasascriucod (int *a, int *b, int *c) {
    if(*a >= *b)
        interschimba_Varpointeri(a, b);
    if(*b >= *c)
        interschimba_Varpointeri(b, c);
    if(*a >= *b)
        interschimba_Varpointeri(a, b);
}

int main() {
    int x = 4, y = 9, z = 7;

    cout << "x si y inainte de interschimbare: ";
    cout << x << " " << y << endl;
    
    interschimba_Varreferinta(x, y);
    cout << "x si y dupa interschimbare: " << x << " " << y << endl;

    x = 4;
    y = 9;

    cout << x << " " << y << endl;
    interschimba_Varpointeri(&x, &y);
    cout << x << " " << y << endl;

    ordoneaza_crescator_mielenasascriucod(&x, &y, &z);
    cout << x << " " << y << " " << z << endl;

    return 0;
}