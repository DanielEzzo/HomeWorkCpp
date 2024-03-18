#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	const int SIZE = 5;
	int array[SIZE][SIZE]{};

	//сщздание 5x5
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = 10 + rand() % 90;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//сщздание 8x2
	const int SIZEK1 = 8;
	const int SIZEK2 = 2;
	int koor[SIZEK1][SIZEK2]{};

	for (int i = 0; i < SIZEK1; i++) {
		for (int j = 0, n; j < SIZEK2; j++) {
			cin >> n;
			koor[i][j] = n;
		}
	}
	

	// превращение в нули
	for (int i = 0, k0, k1; i < SIZEK1; i++) {
		k0 = koor[i][0];
		k1 = koor[i][1];
		if (k0 != -1) array[k0][k1] = 0;
	}
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//перемещение нулей  
	int array1[SIZE][SIZE]{};
	for (int i = 0, I = 0, J = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (array[i][j]) {
				array1[I][J] = array[i][j];
				if (J == SIZE-1) {
					J = 0;
					I++;
				}
				else J++;
			}
		}

	}

	//вывод

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << array1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
