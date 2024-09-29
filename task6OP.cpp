#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int ,int);
void M();
void A();
void R();
void Y();
void A();
void M();
int main()
{
system("cls");
gotoxy(10,10);
M();
A();
R();
Y();
A();
M();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void M()
{
cout<<"          "<<endl;
cout<<" 111     111 "<<endl;
cout<<" 11 11 11 11 "<<endl;
cout<<" 11  11   11"<<endl;
cout<<" 11       11 "<<endl;
cout<<" 11       11 "<<endl;
}
void A()
{
cout<<"          "<<endl;
cout<<"  1111 "<<endl;
cout<<" 11  11 "<<endl;
cout<<" 111111   "<<endl;
cout<<" 11  11 "<<endl;
cout<<" 11  11 "<<endl;
}
void R()
{
cout<<"          "<<endl;
cout<<" 11111 "<<endl;
cout<<" 11  11  "<<endl;
cout<<" 11111   "<<endl;
cout<<" 11  11 "<<endl;
cout<<" 11  11"<<endl;
}
void Y()
{
cout<<"          "<<endl;
cout<<" 11   11 "<<endl;
cout<<"  11 11  "<<endl;
cout<<"   111   "<<endl;
cout<<"    11   "<<endl;
cout<<"    11   "<<endl;
}

