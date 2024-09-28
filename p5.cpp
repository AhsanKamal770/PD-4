#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );

int main()
{
    system("cls");
gotoxy(15,15);
cout<<"'AHSAN KAMAL'";
gotoxy(0,10);

    return 0;
}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




