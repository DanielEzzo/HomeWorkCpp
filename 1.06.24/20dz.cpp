#include <iostream>
#include<fstream>
#include <string>

using namespace std;


void chek(string path, int point1, int point2) {

	ifstream in(path);

	if (in.is_open()) {

		string maxPoint;
		int num = 0;

		while (getline(in, maxPoint)) {
			for (int i = 0; maxPoint[i] != '\0'; i++) {
				num *= 10;
				num += maxPoint[i] - 48;
			}



			if (point1 > num) {
				int size = 0;	
				string strBuf;

				ofstream out(path);

				for (int i = 1; point1 / i > 0; i *= 10, size++) {}

				for (int i = 0, j = 10; i < size; i++, j *= 10) {
					strBuf += point1 % j / (j / 10) + 48;
				}

				for (int i = 0; i < size / 2; i++) {
					swap(strBuf[i], strBuf[size - i - 1]);
				}

				maxPoint = strBuf;

				out << maxPoint;

				cout << "игрок 1 побил рекорд\n";

				out.close();
			}
			else if (point2 > num) {
				int size = 0;
				string strBuf;

				ofstream out(path);

				for (int i = 1; point2 / i > 0; i *= 10, size++) {}

				for (int i = 0, j = 10; i < size; i++, j *= 10) {
					strBuf += point1 % j / (j / 10) + 48;
				}

				for (int i = 0; i < size / 2; i++) {
					swap(strBuf[i], strBuf[size - i - 1]);
				}

				maxPoint = strBuf;

				out << maxPoint;

				cout << "игрок 2 побил рекорд\n";

				out.close();

			}


			in.close();

		}
	}
	else {
		cout << "файл не найден";
	}

}




int main()
{
	string path = "files for game\\record.txt";
	setlocale(LC_ALL, "Russian");

	ifstream in(path);


	if (in.is_open()) {
		cout << "привет. это игра камень-ножницы-бумага. правила все знают. если вы хотите выбрать камень, то введите\"S\"(Stone). для бумаги\"P\"(Paper). для ножниц\"K\"(Knife)\n";
		//ножницы тоже на S начинаются

		int countP1 = 0, countP2 = 0;
		int contract1 = 0, contract2 = 0;

		while (true) {
			char choiceP1, choiceP2;

			cout << "\nпервый игрок введите свой выбор\n";
			cin >> choiceP1;
			cout << "второй игрок введите свой выбор\n";
			cin >> choiceP2;

			if (choiceP1 == choiceP2) {
				cout << "ничья\n";
			}
			else {

				switch (choiceP1) {

				case ('s'):
					switch (choiceP2) {

					case('k'):
						cout << "игрок 1 победил\n";
						countP1++;
						contract1++;
						contract2 = 0;
						break;

					case('p'):
						cout << "игрок 2 победил\n";
						countP2++;
						contract2++;
						contract1 = 0;
						break;
					}
					break;

				case('k'):
					switch (choiceP2) {
					case('p'):
						cout << "игрок 1 победил\n";
						countP1++;
						contract1++;
						contract2 = 0;
						break;

					case('s'):
						cout << "игрок 2 победил\n";
						countP2++;
						contract2++;
						contract1 = 0;
						break;
					}
					break;

				case('p'):
					switch (choiceP2) {
					case('s'):
						cout << "игрок 1 победил\n";
						countP1++;
						contract1++;
						contract2 = 0;
						break;

					case('k'):
						cout << "игрок 2 победил\n";
						countP2++;
						contract2++;
						contract1 = 0;
						break;
					}
					break;

				}

			}
			cout << "1: " << countP1 << " 2: " << countP2 << endl;
			chek("files for game\\record.txt", contract1, contract2);
		}
	}
	else {
		cout << "не найдет файл";
	}
	in.close();
}