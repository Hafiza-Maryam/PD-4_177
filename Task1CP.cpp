#include<iostream>
#include<windows.h>
using namespace std;
void Equal(int,int);
int main()
{
int num1,num2;
cout<<"enter number 1: ";
cin>>num1;
cout<<"enter number 2: ";
cin>>num2;
Equal(num1,num2);
}
void Equal(int x,int y)
{
if(x==y)
cout<<"True";
else
cout<<"False";
}
