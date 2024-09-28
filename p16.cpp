#include <iostream>
using namespace std;
void pet(int holi){
    int a,b,c;
    a=365-holi;
    b=a*63+holi*127;
    c=30000-b;
    if (c>0)
    {
        cout<<"Tom sleeps well.\n"<<(c)/60<<" hours less to play.";
    }
    else
    {
        cout<<"Tom will run away!\n"<<(-1*c)/60<<" hours more to play.";
        
    }
    }


int main() {
int holi;
cout<<"Enter the number of holidays :";
cin>>holi;
pet(holi);
return 0;
}