#include <iostream>
using namespace std;

void showStr(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;
}

void deleteSim(char*& str, int index) {
	int size = _msize(str) / sizeof(str[0]);
	char* buf = new char[size + 1];

	for (int i = 0; i < index; i++) {
		buf[i] = str[i];
	}

	for (int i = index; str[i] != '\0'; i++) {
		buf[i] = str[i + 1];
	}
	delete[]str;
	str = buf;
}

void deleteLetter(char*& str, char letter) {
	int count = 0, size = 0;

	for (; str[size] != '\0'; size++) {
		if (str[size] == letter) {
			count++;
		}
	}

	char* buf = new char[size - count + 1];

	for (int i = 0, j = 0; i <= size; i++) {
		if (str[i] != letter) {
			buf[j] = str[i];
			j++;
		}
	}

	delete[]str;
	str = buf;
}

void pasteLetter(char*& str, char letter, int index) {
	int size = _msize(str) / sizeof(str[0]);
	char* buf = new char[size + 1];

	for (int i = 0; i < index; i++) {
		buf[i] = str[i];
	}

	buf[index] = letter;

	for (int i = index; i <= size; i++) {
		buf[i + 1] = str[i];
	}


	delete[]str;
	str = buf;
}

void replacement(char*& str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '.') {
			str[i] = '!';
		}
	}
}

void chet(char* str) {
	int letter = 0, nums = 0, other = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (48 <= str[i] && str[i] <= 57) {
			nums++;
		}
		else if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122)) {
			letter++;
		}
		else {
			other++;
		}
	}
	cout << "letter: " << letter << " nums : " << nums << " other : " << other;
}

int main()
{
	char* str = new char[8] {'q', 'q', 'e', 'q', 'w', 'e', '7'};
	showStr(str);
	deleteSim(str, 1);
	showStr(str);
	deleteLetter(str, 'e');
	showStr(str);
	pasteLetter(str, '.', 3);
	showStr(str);
	replacement(str);
	showStr(str);
	chet(str);
}