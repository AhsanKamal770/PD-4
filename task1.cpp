#include <iostream>
using namespace std;
void symbols(int a){
if(a%2!=0){

    for (int i = 1; i <= a; i++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
    
}
else
{
    for (int i = 1; i <= a; i++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout<<"#";
        }
        cout<<""<<endl;
}

}
}

int main() {
    int a;
    cout<<"Enter a number :";
    cin>>a;
symbols(a);
return 0;
}