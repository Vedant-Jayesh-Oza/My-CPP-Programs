//next five alphabets after entered letter
#include<iostream.h>
#include<conio.h>
void main()
{

 char ch;
 cout<<"\n enter the alphabet : ";
 cin>>ch;

 int a = int(ch);

 cout<<"\n "<<char(a+1);
 cout<<"\n "<<char(a+2);
 cout<<"\n "<<char(a+3);
 cout<<"\n "<<char(a+4);
 cout<<"\n "<<char(a+5);

 getch();
 }