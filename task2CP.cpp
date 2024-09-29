#include<iostream>
using namespace std;
void Not(string);
int main()
{
string state;
cout<<"enter True or False: ";
cin>>state;
Not(state);
}
void Not(string x)
{
if(x=="true")
cout<<"False";
else if(x=="false")
cout<<"True";
}
