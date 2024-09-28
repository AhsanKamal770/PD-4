#include <iostream>
using namespace std;
void possbonus(unsigned int a,unsigned int b ){
if (b<=a+6){
    cout<<"True!";
}
else{
    cout<<"False!";
}

}
int main() {
    unsigned int a,b;
cout<<"Enter your position :";
cin>>a;
cout<<"Enter your friend's position :";
cin>>b;
possbonus(a,b);
return 0;
}