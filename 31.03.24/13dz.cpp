#include <iostream>
using namespace std;
//вывод
void vivod(char arr[8][8]) {
    cout << "  a b c d e f g h" << endl;
    for (int i = 1; i <= 8; i++) {
        cout << i << " ";
        for (int j = 0; j < 8; j++) {
            cout << arr[i - 1][j] << arr[i - 1][j];
        }
        cout << endl;
    }
}

int main()
{
    //заполнение
    char field[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == j % 2) {
                field[i][j] = 219;
            }
            else {
                field[i][j] = '  ';
            }
        }
    }
    
    vivod(field);
    //ввод значений полбзователем
    int koorI, koorJ;
    cin >> koorI >> koorJ;
    field[koorI - 1][koorJ - 1] = 64;
    //проверка на дурока
    while ((koorI < 9 && koorI>0) && (koorJ < 9 && koorJ>0)){
        cin >> koorI >> koorJ;
        field[koorI - 1][koorJ - 1] = 64;
    } 
    //ходы конём
    for (int i = 3, j = 1; koorI - i < koorI; i -= 2, j += 2) {
        if (koorJ + j < 8) {
            field[koorI - i - 1][koorJ + j - 1] = '*';
        }
        if (koorJ - j > 0) {
            field[koorI - i - 1][koorJ - j - 1] = '*';
        }
    }
    
    for (int i = 3, j = 1; koorI - i < koorI; i -= 2, j += 2) {
        if (koorJ + j < 8) {
            field[koorI + i - 1][koorJ + j - 1] = '*';
        }
        if (koorJ - j > 0) {
            field[koorI + i - 1][koorJ - j - 1] = '*';
        }
    }

    vivod(field);
}
