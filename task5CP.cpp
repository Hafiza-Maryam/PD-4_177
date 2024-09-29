#include<iostream>
using namespace std;
void possibleBonus(int,int);
int main()
{
int yourPosition,friendPosition;
cout<<"enter your position: ";
cin>>yourPosition;
cout<<"enter your friend's position: ";
cin>>friendPosition;
possibleBonus(yourPosition,friendPosition);
}
void possibleBonus(int x,int y) 
{
if(y-x<=6)
cout<<"True";
else 
cout<<"False";
}
