

#include <iostream>
using namespace std;

int main() {
    /*
  int count=0, nh=100, c1,c2,c3;
  while(nh<1000){
    c3 = nh/100;
    c2 = (nh%100)/10;
    c1 = nh%10;

    if((c1==c2) || (c1==c3) || (c2==c3)){
      count++;
}
    nh++;
  }
    cout<<count;

  int count2=0, nh2=100, c12,c22,c32;
  while(nh2<1000){
    c32 = nh2/100;
    c22 = (nh2%100)/10;
    c12 = nh2%10;

    if((c12!=c22) &&(c12!=c32) && (c22!=c32)){
      count2++;
}
    nh2++;
  }
    cout<<count2;
    */

    long long num, outnum=0, n = 1, seek;
    cin >> num;
    while (num != 0) {
        seek = (num % 10);
        if ((seek == 3) || (seek == 6)) {
            
        }
        else {
            outnum += seek * n;
            n = n * 10;
        }
        cout << outnum << endl;
        num = num / 10;
    }
    /*
    int numB=1, numA;

    cout << "input your number: ";
    cin >> numA;
    while (numB<=numA){
       if ((numA%(numB*numB) == 0) && (numA % (numB * numB * numB) != 0)){
            cout << numB << endl;
        }
        numB++;

    }


    int num, ch = 1;

    cout << "input your number: ";
    cin >> num;

    while (ch < num) {
        if ((num % ch) == 0) {
            cout << ch<<endl;
        }
        ch++;
    }


    int num1, num2, ch=1;
    cout << "input num 1 and 2: ";
    cin >> num1 >> num2;

    if (num1 < num2) swap(num1, num2);

    while (ch<=num1){
        if (((num1 % ch) == 0) && ((num2 % ch) == 0)) {
            cout << ch<<endl;
        }
        ch++;
    }

    int num, sum = 0, num1;
    cin >> num;
    num1 = num;
    while (num != 0) {
        sum += (num % 10) ;
        cout << sum<<endl;

        num = num/10 ;
    }
    if ((sum * sum * sum) == (num1 * num1)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    */
}
