#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int ,int);
void printmaze();
void moveplayer(int,int);
int main()
{
int px=5,py=5;
system("cls");
gotoxy(0,3);
printmaze();
moveplayer(px,py);
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
void moveplayer(int px, int py)
{   
  while(px<=10 && py<=10)
   {
     gotoxy(5,5);
     cout<<"patrol";      
     gotoxy(5,5);
     cout<<"     ";
     gotoxy(5,6);
     cout<<"patrol";       
     gotoxy(5,6);
     cout<<"     ";
    }
}

