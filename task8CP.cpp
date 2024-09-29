#include<iostream>
#include<cmath>
using namespace std;

void pet(int);

int main()
{
int holiday;
cout<<"Holidays: ";
cin>>holiday;

pet(holiday);
}

void pet(int holiday) 
{
int workingDay,gameTime,difference,hour,min;

workingDay=365-holiday;
gameTime=(workingDay*63)+(holiday*127);
difference=abs(gameTime-30000);
hour=difference /60;
min=difference % 60;


if(gameTime<30000)
{
cout<<"Tom sleeps well"<<endl;
cout<<hour<<" hours and "<<min<<" minutes less for play.";
}
else 
{
cout<<"Tom will run away"<<endl;
cout<<hour<<" hours and "<<min<<" minutes for play.";
}
}