#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


int main()
{
	srand(time(0));
	double array[15];
	double maxneg = -100000;
	for (int i = 0; i < 15; i++) {

		array[i] = (rand() % 10000 - 5000) / 100.0;
		cout << array[i] << " ";
		if (array[i] < 0) {
			if (array[i] > maxneg) {
				maxneg = array[i];
			}
		}
	}
	cout << "\nThe largest negative number is: " << maxneg;
	cout << "\nThe rounded value of the largest negative number is: " << round(maxneg);
}


