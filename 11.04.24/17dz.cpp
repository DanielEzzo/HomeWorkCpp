#include <iostream>
using namespace std;

void vivod(int** arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1 - 1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}

void vstavkacoumt(int**& arr, int* arrVs) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** array1 = new int* [size1];

	for (int i = 0; i < size1; i++) {
		array1[i] = new int[size2 + 1];
		for (int j = 0; j < size2; j++) {
			array1[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		array1[i][size2] = arrVs[i];
	}

	

	for (int i = 0; i < size1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	arr = array1;
}


int main()
{
	int size1 = 9;
	int** array = new int* [size1];

	for (int i = 0; i < size1; i++) {
		array[i] = new int[8];
		for (int j = 0; j < 8; j++) {
			array[i][j] = 6;
		}
	}
	int* arr3 = new int[8] { 4, 4, 4, 4, 4, 4, 4};
	vstavkacoumt(array, arr3);
	vivod(array);
	cout << endl;
}
