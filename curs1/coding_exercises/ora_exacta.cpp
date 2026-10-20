#include <iostream>

using namespace std;

class OraExacta {
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        OraExacta();
        OraExacta(int hours, int minutes = 0, int seconds = 0);
        void afiseaza() const;
        int inSecunde() const;
        OraExacta& adaugaMinute(int m = 1);
        void seteaza(int hours, int minutes, int seconds);
};

OraExacta::OraExacta() {
    this->hours = 0;
    this->minutes = 0;
    this->seconds = 0;
}

OraExacta::OraExacta(int hours, int minutes, int seconds) {
    if (hours >= 0 && hours <= 23) {
        this->hours = hours;
    }
    else {
        this->hours = 0;
    }

    if (minutes >= 0 && minutes <= 59) {
        this->minutes = minutes;
    }
    else {
        this->minutes = 0;
    }

    if(seconds >= 0 && seconds <= 59) {
        this->seconds = seconds;
    }
    else {
        this->seconds = 0;
    }
}

void OraExacta::afiseaza() const {
    if (this->hours < 10) {
        cout << "0" << hours << ":";
    }
    else {
        cout << hours << ":";
    }

    if (this->minutes < 10) {
        cout << "0" << minutes << ":";
    }
    else {
        cout << minutes << ":";
    }

    if (this->seconds < 10) {
        cout << "0" << seconds << endl;
    }
    else {
        cout << seconds << endl;
    }
}

int OraExacta::inSecunde() const {
    return this->hours * 3600 + this->minutes * 60 + this->seconds;
}

void OraExacta::seteaza(int hours, int minutes, int seconds) {
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

OraExacta& OraExacta::adaugaMinute(int m) {
    this->minutes += m;
    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    this->hours = this->hours % 24;
    return *this;
}

int main() {
    OraExacta a;
    OraExacta b(9, 30);
    OraExacta c(25, 70, 10);
    OraExacta *d = new OraExacta(23, 59);
    a.afiseaza();
    b.afiseaza();
    c.afiseaza();
    d->afiseaza();

    b.adaugaMinute().adaugaMinute(29);
    b.afiseaza();
    d->adaugaMinute(2);
    d->afiseaza();

    OraExacta e(22, 30);
    e.adaugaMinute(150);
    e.afiseaza();

    delete d;
    d = NULL;
    return 0;
}