#ifndef PRICE_H
#define PRICE_H

struct Price {
    int hryvnia;
    short int kop;
};

void transfer(Price& cina);
void add(Price& total, const Price& item);
void multiply(Price& cina, int quantity);
void round(Price& cina);
void print(const Price& cina);

#endif