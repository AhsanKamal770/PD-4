// 
#include <iostream>
using namespace std;

int main() {
    long long a; 
    int d;
    int c[10]={0}; 

    cout<<"Enter a large integer number: ";
    cin>>a;
    if (a==0) {
       
        c[0]++;
    }
    while (a>0) {
       
        d =a%10; 
        if (d==0) 
        {
       
         c[0]++;
        } else if (d==1) 
        {
            c[1]++;
        } else if (d==2)
         {
            c[2]++;
        } else if (d==3)
         {
            c[3]++;
        } else if (d==4)
         {
            c[4]++;
        } else if (d==5)
         {
            c[5]++;
        } else if (d==6) 
        {
            c[6]++;
        } else if (d==7)
         {
            c[7]++;
        } else if (d==8) 
        {
            c[8]++;
        } else {
            c[9]++;
        }
        a = a/10; 
    }
    cout << "Digit Frequencies:" <<endl;
    for (int i = 0; i <= 9; i++) {
        cout << i << "'s frequency is " <<c[i]<<endl;
    }

    return 0;
}