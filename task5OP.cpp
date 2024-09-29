#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int ,int);
void MARYAM();

int main()
{
system("cls");
MARYAM();
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void MARYAM()
{
gotoxy(40,21);
cout<<"         111     111   11111   11111   11   11    11111   111     111   "<<endl;
gotoxy(40,22);
cout<<"         11 11 11 11  11   11  11  11  11   11   11   11  11 11 11 11  "<<endl;
gotoxy(40,23);
cout<<"         11  11   11  1111111  11111     111     1111111  11  11   11  "<<endl;
gotoxy(40,24);
cout<<"         11       11  11   11  11  11     11     11   11  11       11  "<<endl;
gotoxy(40,25);
cout<<"         11       11  11   11  11   11    11     11   11  11       11  "<<endl;
}