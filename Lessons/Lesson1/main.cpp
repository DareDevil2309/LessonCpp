#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	setlocale(0, "");
	char letter;
	cout << "Введите букву: "<< endl;
	cin >> letter;
	cout << islower(letter) << endl;
	return 0;
}
