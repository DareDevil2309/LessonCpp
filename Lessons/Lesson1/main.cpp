#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
float pound, shil, penny;
cout << "Введите количество фунтов: " << endl;
cin >> pound;
cout << "Введите количество шиллингов: " << endl;
cin >> shil;
cout << "Введите количество пенсов: " << endl;
cin >> penny;
cout << "Десятичных фунтов: " << "J" << (penny + shil*12 + pound*20*12)/100 << endl;
return 0;
}
