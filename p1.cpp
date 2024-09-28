#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

int main()
{
cout<<"TEXT"<<endl;

gotoxy(15,15);
cout<<"My name is Ahsan Kamal.";
    return 0;
}


















