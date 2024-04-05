#include <iostream> 
using namespace std;

void vivod(int arr[]) {
	int size = 10;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void rand(int arr[]) {
	int size = 10;

	for (int i = 0; i < size; i++) {
		arr[i] = 10 + rand() % 90;
	}
}

int main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int array1[SIZE]{};
	int array2[SIZE];

	int* pArr1 = array1;
	int* pArr2 = array2;

	rand(pArr2);
	vivod(pArr2);

	for (int i = 0; i < SIZE; i++) {
		*(pArr1 + i) = *(pArr2 + i);
	}
	cout << endl;
	vivod(pArr1);

	for (int i = 0; i < SIZE / 2; i++) {
		swap(*(pArr1 + i), *(pArr1 + SIZE - i - 1));
	}
	cout << endl;
	vivod(pArr1);

	for (int i = 0; i < SIZE / 2; i++) {
		*(pArr2 + i) = *(pArr1 + SIZE - i - 1);
	}
	cout << endl;
	vivod(pArr2);
}