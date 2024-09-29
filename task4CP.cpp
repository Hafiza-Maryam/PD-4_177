#include<iostream>
using namespace std;
void checkSpeed(int);
int main()
{
int speed;
cout<<"enter Speed (km/h): ";
cin>>speed;
checkSpeed(speed);
}
void checkSpeed(int x) 
{
if(x<=100)
cout<<"You are going good";
else 
cout<<"halt... YOU WILL BE CHALLENGED";
}
