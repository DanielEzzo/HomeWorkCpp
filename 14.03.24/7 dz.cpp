#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    const int SIZE2 = 5;
    const int SIZE3 = SIZE + SIZE2;
    int array[SIZE];
    int array2[SIZE2];
    int array3[SIZE3]{};
    for (int i = 0; i < SIZE; i++) {
        array[i] = 0 + rand() % (10);

        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE2; i++) {
        array2[i] = 0 + rand() % (10);
        cout << array2[i] << " ";
    }
    cout << endl;
    /*
    for (int i = 0, flag; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {

                flag = true;

                for(int p = 0; p < i; p++) {
                    if (array[i] == array[p]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    cout << array[i] << " ";
                    break;
                }

                else break;
            }
        }
    }
    */
    for (int i = 0, flag; i < SIZE; i++) {

        flag = true;

        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int p = 0; p < i; p++) {
                if (array[i] == array[p]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                for (int p = i + 1; p < SIZE; p++) {
                    if (array[i] == array[p]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) cout << array[i] << " ";

            }
        }

    }

    for (int i = 0, flag; i < SIZE; i++) {

        flag = true;

        for (int j = 0; j < SIZE; j++) {
            if (array2[i] == array[j]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int p = 0; p < i; p++) {
                if (array2[i] == array2[p]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int p = i + 1; p < SIZE; p++) {
                    if (array2[i] == array2[p]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i] << " ";
            }
        }
    }
}