#include<iostream>
using namespace std;

void tpChecker(int,int);

int main()
{
int people,tp;
cout<<"Number of people in household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}

void tpChecker(int people,int tp) 
{
int perDay,totalSheet,days;
perDay=people*57;
totalSheet=tp*500;
days=totalSheet/perDay;

if(days<=14)
{
cout<<"TP will only last "<<days<<" days ";
cout<<",Buy more!"<<endl;
}
else 
{
cout<<"TP will last "<<days<<" days ";
cout<<", no need to panic!"<<endl;
}
}
