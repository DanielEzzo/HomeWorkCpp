#include <iostream> 
using namespace std;


void virezstr(int**& arr, int num) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int** array1 = new int* [size1 - 1];

	for (int i = 0; i < num; i++) {
		array1[i] = arr[i];
	}
	for (int i = num + 1; i < size1; i++) {
		array1[i - 1] = arr[i];
	}

	delete[]arr[num];
	delete[]arr;
	arr = array1;
}

void virezcount(int**& arr, int num) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** array1 = new int* [size1];

	for (int i = 0; i < size1; i++) {
		array1[i] = new int[size2 - 1];
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < num; j++) {
			array1[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		for (int j = num + 1; j < size2; j++) {
			array1[i][j - 1] = arr[i][j];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	arr = array1;
}


void vstavkastr(int**& arr, int num, int* arrVs) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int** array1 = new int* [size1 + 1];

	for (int i = 0; i < num; i++) {
		array1[i] = arr[i];
	}
	array1[num] = arrVs;
	for (int i = num + 1; i < size1; i++) {
		array1[i] = arr[i - 1];
	}


	delete[]arr;
	arr = array1;
}

void vstavkacoumt(int**& arr, int num, int* arrVs) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** array1 = new int* [size1];

	for (int i = 0; i < size1; i++) {
		array1[i] = new int[size2 + 1];
		for (int j = 0; j < num; j++) {
			array1[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		array1[i][num] = arrVs[i];
	}

	for (int i = 0; i < size1; i++) {
		for (int j = num + 1; j < size2 + 1; j++) {
			array1[i][j] = arr[i][j - 1];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	arr = array1;
}


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



int main()
{
	srand(time(NULL));
	int size1 = 9;
	int** array = new int* [size1];

	for (int i = 0; i < size1; i++) {
		array[i] = new int [8];
		for (int j = 0; j < 8; j++) {
			array[i][j] = 6;
		}
	}
	

	int* arr2 = new int[9] {1, 4, 4, 4, 4, 4, 4, 4, 4};
	int* arr3 = new int[8] {1, 4, 4, 4, 4, 4, 4, 4};

	vivod(array);
	cout << endl;
	virezcount(array, 2);
	vivod(array);
	cout << endl;
	virezstr(array, 2);
	vivod(array);
	cout << endl;
	vstavkacoumt(array, 1, arr3);
	vivod(array);
	cout << endl;
	vstavkastr(array, 2, arr2);
	vivod(array);
	cout << endl;
	
	
}