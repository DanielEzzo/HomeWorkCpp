
#include <iostream>
using namespace std;
int main()
{
	// 1
	/*int num1;
	cin >> num1;

	for (int i = 0, num2; i < 3; i++) {
		cin >> num2;

		if (num1 < num2) swap(num1, num2);
	}
	cout << num1;

	// 2

	int a, b, n, a1;
	cin >> a >> b >> n;
	a1 = a;
	for (int i = 1; i <= n ; i++, a++) { 
		if (a > b) {
			a = a1;
		}
		cout << a<<" ";
	}
	
	// 3
	double max;
	cin >> max;

	for (double i = 0; i <= max; i += 0.25) {
		cout << i<<endl;
	}
	

	// 4
	double num, sum = 0, count = 0;
	cin >> num;
	while (num != 0) {
		sum += num;
		count++;
		cin >> num;
	}
	cout << sum / count;
	
	// 5
	int n_sim;
	char ch_sim;
	cin >> ch_sim;
	n_sim = int(ch_sim);
	if (((65 <= n_sim) && (n_sim >= 90)) || ((97 <= n_sim) && (n_sim <= 122))) cout << "bukva";
	else cout << "ne bukva";

	// 6
	int min1, max1, min2, max2;
	cin >> min1 >> max1 >> min2 >> max2;

	if (min1 > max1) swap(min1, max1);
	if (min2 > max2) swap(min2, max2);
	if (min1 > min2) swap(min1, min2);
	if (max1 > max2) swap(max1, max2);
	for (int i = min1; i < min2 && i <= max1; i++) {
		cout << i << endl;
	}
	cout << endl;
	for (int i = min2; i <= max2; i++) {
		if (i > max1)
			cout << i << endl;
	}
	
	//7
	int min, max, n, count = 0, proverka = 0;
	cin >> min >> max >> n;
	if (min > max) swap(min, max);
	proverka = n - (min % n);
	if (proverka != 0) {
		min += proverka;
	}

	for (int i = min; i <= max; i += n) {
		count++;
	}
	cout << count;
	*/
	
	


}
