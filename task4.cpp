#include <iostream>
using namespace std;

int main() {
    while(true){
    string s;
    int a,b;
    cout<<"Welcome to ATM!"<<endl;
    cout<<"Enter either  'deposit' or 'withdraw': "<<endl;
    cin>>s;
     if(s=="withdraw")
     {
       cout<<"Enter your current balance"<<endl;
       cin>>a;
        cout<<"Enter  the amount you want to withdraw: "<<endl;
cin>>b;
        if (b>a)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else{
            cout<<"Here's your cash.Have a nice day."<<endl;
        }
    }
    else
    {
        cout<<"Enter the amount you want to deposit."<<endl;
        cin>>a;
        cout<<"Your account has been credited with Rs "<<a<<endl;
    }
    }
    
   

    

return 0;
}