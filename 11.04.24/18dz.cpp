#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int size1 = 3, size2 = 4;
	int** array = new int* [size1];
	//+coumn

	for (int i = 0; i < size1; i++) {
		array[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			array[i][j] = 1 + rand() % 9;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	size2++;
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			buf[i][j] = array[i][j];
		}
	}

	int* arr = new int[size1] {0, 0, 0};

	for (int i = 0; i < size1; i++) {
		buf[i][size2 - 1] = arr[i];
	}

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = buf;

	cout << endl;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	//-str
	/*int** buf3 = new int* [size1 - 1];

	for (int i = 0; i < size1 - 1; i++) {
		buf3[i] = array[i];
	}

	delete[]array[size1 - 1];
	delete[]array;
	array = buf3;

	cout << endl;
	for (int i = 0; i < size1 - 1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	size1--;*/

	//-coumn
	size2--;
	int** buf2 = new int* [size1];

	for (int i = 0; i < size1; i++) {
		buf2[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			buf2[i][j] = array[i][j];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = buf2;

	cout << endl;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}