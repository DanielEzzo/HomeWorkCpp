
#include <iostream>
using namespace std;

int main()
{
	/*
	const int SIZE1 = 5;
	const int SIZE2 = 5;
	int array[SIZE1][SIZE2]{}, chis;

	cin >> chis;

	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++ , chis*=2) {
			array[i][j] = chis;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	*/

	const int SIZE1 = 5;
	const int SIZE2 = 5;
	int array[SIZE1][SIZE2]{}, chis;

	cin >> chis;

	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++, chis++) {
			array[i][j] = chis;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}


