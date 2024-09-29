#include<iostream>
using namespace std;
void longestTime(int,int);
int main()
{
int hour,min;
cout<<"enter the number of hours: ";
cin>>hour;
cout<<"enter the number of minutes: ";
cin>>min;
longestTime(hour,min);
}
void longestTime(int hour,int min) 
{
int hoursec,minsec;
hoursec=hour*60*60;
minsec=min*60;
if(hoursec>minsec)
cout<<hour;
else 
cout<<min;
}
