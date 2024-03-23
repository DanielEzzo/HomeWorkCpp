
#include <iostream>
using namespace std;
 
//1
int stepen(int osn, int pokazatel) {
	int itog = 1;
	for (int i = 0; i < pokazatel; i++) {
		itog *= osn;
	}

	return itog;
}

//2
int sumDiapozona(int min, int max) {
	int sum = 0;

	if (min > max) swap(min, max);

	while (min <= max) {
		sum += min; 
		min++;
	}
	return sum;
}

//3
void sovershenno(int min, int max) {                                                 
	if (max < min) swap(min, max);
	
	for (int i = min, sum; i < max; i++) {
		sum = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				sum += i;
			}
		}
		if (sum == i) {
			cout << i << endl;
		}
	}

	
}

//4
void karta(char mast, char znach) {
	for (int i = 0; i < 10; i++) {
		cout << " _";
	}
	cout << endl;

	cout << "| " << mast;
	for (int i = 0; i < 8; i++) {
		cout << "  ";
	}
	cout << " | ";
	cout << endl;
	

	for (int i = 0; i < 4; i++) {
		cout << "| ";
		for (int i = 0; i < 9; i++) {
			cout << "  ";
		}
		cout << "| ";
		cout << endl;
	}

	

	cout << "| ";
	for (int i = 0; i < 4; i++) {
		cout << "  ";
	}
	cout << znach;
	for (int i = 0; i < 4; i++) {
		cout << "  ";
	}
	cout << " | " << endl;


	for (int i = 0; i < 4; i++) {
		cout << "| ";
		for (int i = 0; i < 9; i++) {
			cout << "  ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << "| ";
	for (int i = 0; i < 8; i++) {
		cout << "  ";
	}
	cout << mast << " | ";
	cout << endl;

	cout << "| ";
	for (int i = 0; i < 9; i++) {
		cout << "_ ";
	}
	cout << "| ";
	cout << endl;
}

void luckyNum(int num) {
	if (num > 999999) cout << "Error";

	else if (num < 100000)cout << "Error";

	else {
		int sum1 = 0, sum2 = 0;
		for (int i = 0, raz = 1; i < 3; i++, raz *= 10) {
			sum1 += (num / raz) % 10;
		}
		for (int i = 0, raz = 1000; i < 3; i++, raz *= 10) {
			sum2 += (num / raz) % 10;
		}
		if (sum1 == sum2) cout << "Lucky num";
		else cout << ":(";
	}
}

int main()
{
	
	//1
	int a = stepen(2, 11);
	cout << a << endl;

	//2
	a = sumDiapozona(-1, 2);
	cout << a << endl;

	//3
	sovershenno(1, 8);


	//4
	karta(3, 54);

	//5
	luckyNum(545545);
}
