#include<iostream.h>
#include<conio.h>
void main()
{
 int n,num,digit,rev=0;
 cout<<"\n ENTER THE NUMBER ";
 cin>>num;

 n=num;

 while(num!=0)
 {
 digit=num%10;
 rev=(rev*10)+digit;
 num=num/10;
 }
 if(n==rev)
 {
 cout<<"\n THE NUMBER IS PALINDROME ";
 }
 else
 {
 cout<<"\n THE NUMBER IS NOT A PaLINDROME ";
 }
 getch();
}