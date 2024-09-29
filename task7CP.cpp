#include<iostream>
using namespace std;
void flowerShop(int,int,int);
int main()
{
int redRose,whiteRose,tulip;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulip: ";
cin>>tulip;
flowerShop(redRose,whiteRose,tulip);
}

void flowerShop(int redRose,int whiteRose,int tulip) 
{
float originalPrice,discountPrice,percent;
originalPrice=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
cout<<"Original Price is: $"<<originalPrice<<endl;
if(originalPrice>200)
{
percent=(originalPrice*20)/100;
discountPrice=originalPrice-percent;
cout<<"Price after discount is: $"<<discountPrice;
}
else
cout<<"No discount";
}