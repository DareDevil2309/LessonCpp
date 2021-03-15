#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
int letter;
cout << "Введите букву: "<< endl;
cin >> letter;
cout << islower(letter) << endl;
return 0;
}
