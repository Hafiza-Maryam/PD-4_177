#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int ,int);
void printmaze();
int main()
{
system("cls");
gotoxy(0,3);
printmaze();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
cout<<" ####################"<<endl;
cout<<" #                  #"<<endl;
cout<<" #                  #"<<endl;
cout<<" #                  # "<<endl;
cout<<" #                  # "<<endl;
cout<<" #                  #"<<endl;
cout<<" #                  # "<<endl;
cout<<" #                  #"<<endl;
cout<<" #################### "<<endl;
}
