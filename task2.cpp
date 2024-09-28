#include <iostream>
using namespace std;
void prime(int a, int b){
if (a>b)
{
    cout<<"First number must always be smaller than second one!";
}
else if (a<=1)
{
    cout<<"For checking first number must always be positive and >1!";
}
else
{
    for (a; a <= b; a++){
    bool yes=true;
        for (int i = 2; i < a; i++)
        {
            if (a%i==0 )
            {
                yes=false;
           break;
            }

        }
        if (yes==false){

                cout<<a<<"'a not a prime number."<<endl;
        }
        
            else
            {
             cout<<a<<"'s a prime number."<<endl;   
            }
            
        
    }
}

}
int main() {
int a,b;
cout<<"Enter first number :";
cin>>a;
cout<<"Enter second number :";
cin>>b;
prime(a,b);
return 0;
}