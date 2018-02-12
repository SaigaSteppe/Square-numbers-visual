#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main() {
	const unsigned char WHITE = 219;
	const unsigned char GREY = 176;
	long closestSquareRoot;
	unsigned char ch;

	for (int i = 0; i <= 30000; i++) {

		closestSquareRoot = sqrt(i);

		if (i == closestSquareRoot * closestSquareRoot) {
			ch = WHITE;
		}
		else {
			ch = GREY;
		}

		cout << ch;
	}

	_getch();
	
}