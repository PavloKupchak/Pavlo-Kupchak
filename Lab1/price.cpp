#include <iostream>
#include "price.h"
using namespace std;

void transfer(Price& cina) {
    while (cina.kop >= 100) {
        cina.hryvnia++;
        cina.kop -= 100;
    }
}

void add(Price& total, const Price& item) {
    total.hryvnia += item.hryvnia;
    total.kop += item.kop;
    transfer(total);
}

void multiply(Price& cina, int quantity) {
    cina.hryvnia *= quantity;
    cina.kop *= quantity;
    transfer(cina);
}

void round(Price& cina) {
    if (cina.kop % 10 >= 5)
        cina.kop += (10 - cina.kop % 10);
    else
        cina.kop -= cina.kop % 10;
    transfer(cina);
}

void print(const Price& cina) {
    cout << cina.hryvnia << " hrn " << cina.kop << " kop" << endl;
}