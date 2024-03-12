#include <iostream>
using namespace std;
int main() {
    /*
      srand(time(NULL));
      int array[10]{};
     for (int i = 0; i < 10; i++) {
      array[i]= 10 + rand() % 90;
      cout << array[i] << " ";
      }
      cout<<endl;

    int max=array[0], min=array[0];

      for(int i=1;i<10;i++){
        if(array[i]<min) min=array[i];
        if(array[i]>max) max=array[i];
      }
      cout<<min<<endl<<max;

    int num, min, max, sum = 0;
    srand(time(NULL));
      int array[10];
    cin>>num>>min>>max;
     for (int i = 0; i < 10; i++) {
      array[i]= min + rand() % (max-min+1);
      cout << array[i] << " ";
    if(array[i]<num) sum+=array[i];
      }
      cout<<endl;
    cout<<sum;

    int array[12];

    for(int i = 0; i < 12; i++){
      cout<<"Enter your earnings per month: ";
      cin>>array[i];
    }
    int m_min, m_max;
    cin>>m_min>>m_max;
      if(m_min>m_max) swap(m_min,m_max);
    while(m_min<1 ||m_max>12){cout<<"Error. pleaseenter correct month:";
    cin>>m_min>>m_max;
      if(m_min>m_max) swap(m_min,m_max);
    }
    int max=array[m_min-1];
    for(int i = m_min; i < m_max; i++){
      if(array[i]>max) max = array[i];
    }
    cout<<max;
    */
    srand(time(NULL));
    int array[10]{};
    for (int i = 0; i < 10; i++) {
        array[i] = -10 + rand() % 21;
        cout << array[i] << " ";
    }
    cout << endl;
    /*
      int sum_minus = 0;
      for(int i = 0; i< 10; i++){
        if(array[i]<0) sum_minus += array[i];
      }
      cout<<sum_minus<<endl;

    int min, max, proizved=1;
    cin>>min>>max;
    if(min>max) swap(min,max);
    for(int i=0; i<10; i++){
      if(array[i]>=min && array[i]<=max) proizved*=array[i];
    }
    cout<<proizved<<endl;

    int proizved1=1;
      for(int i = 0; i < 10; i+=2) proizved1 *= array[i];
    cout << proizved1 ;
      */
    int minst = -1, minend = -1;
    for (int i = 0; i < 10; i++) {
        if (array[i] < 0) {
            minst = i;
            break;
        }
    }
    for (int i = 9; i >= 0; i--) {
        if (array[i] < 0) {
            minend = i;
            break;
        }
    }
    if (minst == minend) cout << "1minus" << endl;
    else {
        for (int i = minst; i <= minend; i++) { cout << array[i] << " "; }
    }
}
