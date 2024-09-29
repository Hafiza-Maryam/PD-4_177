#include<iostream>
#include<windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string,int,int,int);
void compareMarks(string,int,string,int);

int main()
{
 int matricMarks,interMarks,ecatMarks,ecatMarksStd1,ecatMarksStd2;

 string nameStd1,nameStd2,name;

 system("cls");

cout<<"enter your name: ";
cin>>name;

cout<<"enter your matricMarks: ";
cin>>matricMarks;

cout<<"enter your interMarks: ";
cin>>interMarks;

cout<<"enter your ecatMarks: ";
cin>>ecatMarks;

cout<<"enter Student 1 name: ";
cin>>nameStd1;

cout<<"enter Student 2 name: ";
cin>>nameStd2;

cout<<"enter Student 1 ecat Marks: ";
cin>>ecatMarksStd1;

cout<<"enter Student 2 ecat Marks: ";
cin>>ecatMarksStd2;

printMenu();
calculateAggregate(name,matricMarks,interMarks,ecatMarks);
compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
}

void printMenu()
{
cout<<"UMAS System"<<endl;
}

void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks)
{
float matric,inter,ecat,aggregate;

matric=(matricMarks/1100)*100;
inter=(interMarks/550)*100;
ecat=(ecatMarks/400)*100;

aggregate=(matric*0.30)+(inter*0.30)+(ecat*0.40);
cout<<name<<"'s aggregate is: "<<aggregate<<endl;
}

void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2)
{
 if(ecatMarksStd1>ecatMarksStd2)
  {
   cout<<"1st roll no.: ";
   cout<<nameStd1<<endl;
   cout<<"2nd roll no.: ";
   cout<<nameStd2;
  }
 else
  {
   cout<<"1st roll no.: ";
   cout<<nameStd2<<endl;
   cout<<"2nd roll no.: ";
   cout<<nameStd1;
  }
}
