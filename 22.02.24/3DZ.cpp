

#include <iostream>
using namespace std;

int main()
{
	/*
	int numch;
	char ch;

	cin >> ch;
	numch = int(ch);

	if (((65 <= numch) && (numch <= 90)) || ((97 <= numch) && (numch <= 122))) {
		cout << "bukva" << endl;
	}

	else if ((48 <= numch) && (numch <= 57)) {
		cout << "cifra" << endl;
	}

	else {
		switch (numch) {
			case 33:
				cout << "znak" << endl;
				break;
			case 34:
				cout << "znak" << endl;
				break;
			case 39:
				cout << "znak" << endl;
				break;
			case 40:
				cout << "znak" << endl;
				break;
			case 41:
				cout << "znak" << endl;
				break;
			case 44:
				cout << "znak" << endl;
				break;
			case 46:
				cout << "znak" << endl;
				break;
			case 58:
				cout << "znak" << endl;
				break;
			case 59:
				cout << "znak" << endl;
				break;
			case 63:
				cout << "znak" << endl;
				break;
			default:
				cout << "drugoe" << endl;
				break;
		}
	}
	

	int oper1, oper2;
	double tsena , min;
	cout << "1-megafon, 2-mts, 3-tele2 --- min kol-vo" << endl;
	cin >> oper1 >> oper2>>min;

	if (((oper1 == 1) && (oper2 == 2)) || ((oper1 == 2) && (oper2 == 1))) {
		tsena = min * 2;
	}
	else if (((oper1 == 1) && (oper2 == 3)) || ((oper1 == 3) && (oper2 == 1))) {
		tsena = min * 3;
	}
	else if (((oper1 == 2) && (oper2 == 3)) || ((oper1 == 3) && (oper2 == 2))) {
		tsena = min * 4;
	}
	cout << tsena;
	*/

	int vibor;
	cout << "enter your vibor programms:  ";
	cin >> vibor;
	if (vibor ==1){
		
		int dohod, opoz, two_chis;
		cout << "input kol-vo opozdaniy: ";
		cin >> opoz;
		opoz = opoz * 20.0;
		cout << "input dohod: ";
		cin >> dohod;
		dohod = (dohod + opoz);
		two_chis = (dohod % 100)/10;

		switch (two_chis) {
			case 2:
				dohod += 30;
				break;
			case 4:
				dohod += 10;
				break;
			case 6:
				dohod += 40;
				break;
			case 8:
				dohod += 20;
				break;
		}
		cout << "nujno " <<  dohod / 50 * 100 << " strok";
	}
	else if (vibor == 2) {
		int stroki, zp, opoz;
		cout << "input kol-vo strok: ";
		cin >> stroki;
		stroki = stroki / 100 * 50;
		cout << "input zp: ";
		cin >> zp;
		zp = stroki - zp;
		cout << zp / 20;
	}
	else if (vibor == 3) {
		int zp, stroki, opoz;
		cout << "input kol-vo strok kratnoe 100: ";
		cin >> stroki;
		stroki = stroki / 100 * 50;
		cout << "input kol-vo opozdaniy: ";
		cin >> opoz;
		opoz = opoz * 20;
		zp = stroki - opoz;
		if (zp<0){
			cout << "VI DOLJNI KOMPANII!! "<<zp;
		}
		else if (zp > 0) {
			cout << "vi poluchite: " << zp;
		}
		else {
			cout << "vi poluchili nichego";
		}
	}
}