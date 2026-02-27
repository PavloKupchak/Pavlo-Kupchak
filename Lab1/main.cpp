#include <iostream>
#include <cstdio>
#include "price.h"
using namespace std;
int main() {
    FILE* my_file = fopen("items.txt", "r");
    if (!my_file) { cout << "File opening error"; return 1; }
    Price total = {0, 0}, item;
    int number;
    while (fscanf(my_file, "%d %hi %d", &item.hryvnia, &item.kop, &number) == 3){ 
    multiply(item, number); add(total, item); }
    fclose(my_file);
    cout << "Total price: "; print(total);
    round(total);
    cout << "Before payment: "; print(total);
}
