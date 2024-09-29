#include<iostream>
#include<windows.h>
using namespace std;
void DiscountPrice(string,float);
int main()
{
float ticketPrice;
string countryName;
cout<<"enter the country's name: ";
cin>>countryName;
cout<<"enter the ticket's price in dollars: $";
cin>>ticketPrice;
DiscountPrice(countryName,ticketPrice);
}
void DiscountPrice(string countryName ,float ticketPrice)
{
float totalPrice,percent;

if(countryName=="Pakistan")
percent=(ticketPrice*5)/100;

else if(countryName=="Ireland")
percent=(ticketPrice*10)/100;

else if(countryName=="India")
percent=(ticketPrice*20)/100;

else if(countryName=="England")
percent=(ticketPrice*30)/100;

else if(countryName=="Canada")
percent=(ticketPrice*45)/100;

totalPrice=ticketPrice-percent;
cout<<"Final ticket price after discount is: $"<<totalPrice;
}
