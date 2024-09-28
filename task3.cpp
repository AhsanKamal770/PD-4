#include <iostream>
using namespace std;
void fizz(int a,int b){
for (int i = 1; i <=100; i++)
{
    

    if (i%a==0)
    {
        cout<<"Fizz"<<endl;
    }
    else if (i%b==0)
    {
        cout<<"Buzz"<<endl;
    }

 else if (i%a==0 && i%b==0)
{
    cout<<"FizzBuzz"<<endl;
}
else
{
    cout<<"";
}

}
}
int main() {
    int a,b,c;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
fizz(a,b);
return 0;
}