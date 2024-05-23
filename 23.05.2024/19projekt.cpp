#include <iostream>
#define out cout<<"Hello";
//#define summ(a,b,c)a+b+c;
//#define min(a,b) cout<<((a<b)?a:b);
//#define max(a,b) cout<<((a<b)?a:b);
//#define sq(a) a*2;
//#define st(a,step) for(int i=1,a1 = a;i<step;i++,a*=a1) 
//#define even(a) if(a%2) cout<<"even";
//#define odd(a) if(!(a%2)) cout<<"odd";
#define rand(a,b) a+rand()%(b+1-a);
#define MAXIMUM(a,b,c) if(a>b&&a>c) cout<<a;else if(b>c) cout<<b; else cout<<c;
#define end cout<<endl;
using namespace std;

void swapStr(char str[]) {
	int size = 0;
	for (; str[size] != '\0'; size++){}
	for (int i = 0; i < size / 2; i++) {
		swap(str[i], str[size - i - 1]);
	}
}

void chet(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (('0' <= str[i]) && (str[i] <= '9')) count++;
	}
	cout << count;
}

void chetBukvi(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (('a' <= str[i]) && (str[i] <= 'z')|| ('A' <= str[i]) && (str[i] <= 'Z')) count++;
	}
	cout << count;
}

void slova(char str[]) {
	int size = 0;
	for (; str[size] != '\0'; size++) {}
	int pered = 0;
	for (; ' '!=str[size]; size++, pered++) {}
	for(int)
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (' ' == str[i]) {
			if (str[i + 1] != ' ') {
				count++;
			}

			}
		}
	cout << count;
}

int main()
{
	/*min(1,2)
	end
	max(1,2)
	end
	cout << sq(2)
	cout << endl;
	int b = 2;
	st(b, 3)
	cout << b;*/
	srand(time(NULL));
	/*int c = rand(1, 9)
	cout << c;*/
	//MAXIMUM(1,2,3)

	int array[4]{ 1,1,1,1 };
	for (int i = 0; i < 4; i++) {
		cout << array[i];
	}
	end

	char str[] = " qwer3 33t2y ";
	int SIZE = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < SIZE; i++) {
		cout << str[i];
	}
	end
	swapStr(str);
	for (int i = 0; i < SIZE; i++) {
		cout << str[i];
	}
	end
	chet(str);
	end
		chetBukvi(str);
	end
		slova(str);
}