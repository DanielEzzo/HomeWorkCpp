

#include <iostream>
using namespace std;

int main()
{
	int vibor, str;
	cout << "Vvedite vash vibor(0 - vihod) i storonu: ";
	cin >> vibor ;

	while (vibor != 0) {
		cin >> str;
		if (vibor == 1) {
			for (int i = 1; i <= str; i++) {
				for (int j = 1; j < i; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= str - i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
		}


		else if (vibor == 2) {
			for (int i = 1; i <= str; i++) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
		}


		else if (vibor == 3) {
			str++;
			for (int i = 1; i <= str / 2; i++) {
				for (int j = 1; j < i; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= str - i - i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
		}


		else if (vibor == 4) {
			if (str % 2) {
				for (int i = 0; i <= str; i += 2) {
					for (int j = 1; j < str - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
			else {
				for (int i = 1; i <= str; i += 2) {
					for (int j = 1; j < str - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
		}


		else if (vibor == 5) {
			str++;
			for (int i = 1; i <= str / 2; i++) {
				for (int j = 1; j < i ; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= str - i - i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
			str--;
			if (str % 2) {
				for (int i = 2; i <= str; i += 2) {
					for (int j = 1; j < str - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
			else {
				for (int i = 1; i <= str; i += 2) {
					for (int j = 1; j < str - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
		}

		else if (vibor == 6) {
			for (int i = 1; i <= (str / 2); i++) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				for (int j = 1; j <= str - (i * 2); j++) {
					cout << "  ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
			if (str % 2) {
				for (int i = str; i > 0; i--) {
					cout << "* ";
				}
				cout << endl;
				for (int i = (str / 2); i > 0; i--) {
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					for (int j = 1; j <= str - (i * 2); j++) {
						cout << "  ";
					}
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
			else{
				for (int i = (str / 2); i >= 0; i--) {
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					for (int j = 1; j <= str - (i * 2); j++) {
						cout << "  ";
					}
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
		}


		else if (vibor == 7) {
			str++;
			for (int i = 1; i <= str / 2; i++) {
				for (int j = 0; j < i; j++) {
					cout << "* ";
				}
				
				cout << endl;
			}

			if (str % 2) {
				for (int i = -3; i <= (str / 2); i += 2) {
					for (int j = (str / 2); j > i; j -= 2) {
						cout << "* ";
					}

					cout << endl;
				}
			}
			else {
				for (int i = -2; i <= str / 2; i += 2) {
					for (int j = (str / 2); j > i + 1; j -= 2) {
						cout << "* ";
					}
					cout << endl;
				}
			}
		}
		else if (vibor == 8) {
			if(str%2){
				for (int i = 1; i < (str + 3)/2; i++)
				{
					for (int j = str - i; j > 0; j--)
					{
						cout << "  ";
					}
					for (int j = 0; j < i; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}

			}
			else {
				
				for (int i = 1; i < (str + 2) / 2; i++){
					for (int j = str - i; j > 0; j--)
					{
						cout << "  ";
					}
					for (int j = 0; j < i; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}
			}
				for (int i = str / 2; i > 0; i--) {
					for (int j = str - i; j > 0; j--) {
						cout << "  ";
					}
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			
			}


		else if (vibor == 9) {
			for (int i = str; i >= 0; i--) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
		}

		else if (vibor == 10) {
			for (int i = 0; i < str + 1; i++)
			{
				for (int j = str - i; j > 0; j--)
				{
					cout << "  ";
				}
				for (int j = 0; j < i; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
		}
			cout << "Vvedite vash vibor(0 - vihod) i storonu: ";
			cin >> vibor ;
		}

		
		}



