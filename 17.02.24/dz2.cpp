#include <iostream>
using namespace std;
int main() {
    //1 задание
    /*
    int chis;
    cout << "Input your number\n";
    cin >> chis;
    if (chis / 100000 ==0){
      cout << "Error\n";
    }
    else if(chis / 100000 > 9){
      cout << "Error \n";
    }
    else{
      int n1, n2, n3, n4, n5, n6, sum1, sum2;
      n1 = chis / 100000;
      n2 = chis / 10000 %10;
      n3 = chis / 1000 % 10;
      n4 = chis / 100 % 10;
      n5 = chis / 10 % 10;
      n6 = chis % 10;
      sum1 = n1 + n2 +n3;
      sum2 = n4 + n5 + n6;
      if(sum1 == sum2){
        cout << "this number is lucky \n";
      }
      else{
        cout << "this number is not lucky \n";
      }
    }
    */
    //2 задание
    /*
    int chis4;
    cout << "Input your number\n";
    cin >> chis4;
    if (chis4 / 1000 ==0){
      cout << "Error\n";
    }
    else if(chis4 / 1000 > 9){
      cout << "Error \n";
    }
    else{
      int n41, n42, n43, n44;
      n41 = chis4 / 1000;
      n42 = chis4 / 100 %10;
      n43 = chis4 / 10 % 10;
      n44 = chis4 % 10;
      cout << n42 << n41 << n44 << n43 << endl;
    }
    */
    //3 задание
    /*
    double num1, num_i;
    cout << "Input 7 nums" << endl;
    cin >> num1;
    for (int i = 0; i < 6; i++) {
        cin >> num_i;
        if (num1 < num_i) {
            num1 = num_i;
        }
    }
    cout << num1;
    */
    //4 задание
    double AB, BC, weightAB, weightBC, oilAB, oilBC;
    cout << "input distance-AB and distance-BC, weight-AB, weight-BC(kg)" << endl;
    cin >> AB >> BC >> weightAB >> weightBC;
    if ((weightAB >= 2000) || (weightBC >= 2000)){
        cout << "plant can't fly"<<endl;
    }
    else {
        if (weightAB < 500) {
            oilAB = AB;
        }
        else if (weightAB < 1000) {
            oilAB = AB *4;
        }
        else if (weightAB < 1500) {
            oilAB = AB*7;
        }
        else if (weightAB < 2000) {
            oilAB = AB*9;
        }

        if (weightBC < 500) {
            oilBC = BC;
        }
        else if (weightBC < 1000) {
            oilBC = BC * 4;
        }
        else if (weightBC < 1500) {
            oilBC = BC * 7;
        }
        else if (weightBC < 2000) {
            oilBC = BC * 9;
        }

        if ((oilAB > 300) || (oilBC > 300)) {
            cout << "plane can't fly"<<endl;
        }
        cout << "in B " << oilBC << " for AC" << oilAB + oilBC;
    }
    // не до конца понятные условия. самолёт вылетает с полным баком или ровно до В?
}
