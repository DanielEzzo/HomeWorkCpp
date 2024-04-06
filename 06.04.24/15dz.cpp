#include <iostream> 
using namespace std;

void vivod(int arr[]) {
	int size = _msize(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}


void virez(int*& arr1, int* arr2) {
	int size1 = _msize(arr1) / sizeof(arr1[0]);
	int size2 = _msize(arr2) / sizeof(arr2[0]); 
	int count = 0;

	

	for (int i = 0, flag; i < size1; i++) {
		flag = true;
		for (int j = 0, flag2; j < size2; j++) {
			flag2 = false;
			if (arr1[i] == arr2[j]) {
				for (int k = 0; k < size2; k++) {
					if (arr2[j] == arr2[k]) {
						flag2 = true;
						flag = false;
						break;
					}
				}
			}
			if (flag2) break;
		}
		if (flag) count++;
	}

	int* buf = new int[count];

	for (int i = 0, j = 0, flag; i < size1; i++) {
		flag = true;  
		for (int k = 0; k < size2; k++) {
			if (arr1[i] == arr2[k]) {
				flag = false;
			}
		}
		if (flag) {
			buf[j++] = arr1[i];
		}
	}
	delete[] arr1;
	arr1 = buf;
}

int main()
{
	srand(time(NULL));

	int size = 13;
	int* array1 = new int[size] {1, 2, 3, 4, 5, 4, 4, 4, 4 , 4 ,5, 6};
	int* array2 = new int [size] {4};

	virez(array1, array2);
	vivod(array1);
}