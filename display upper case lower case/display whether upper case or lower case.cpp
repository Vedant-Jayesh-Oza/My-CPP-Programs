//display whether upper case or lower case
#include<iostream.h>
#include<conio.h>
void main()

{
 char ch;
 cout<<"\n enter the character";
 cin>>ch;

 int a = int(ch);

 if(a>=65 && a<=91)
 {
 cout<<"\n the character is upper case";
 }

 else if (a>=97 && a<=123)
 {
 cout<<"\n the character is lower case";
 }

 else if (a>=48 && a<=57)
 {
 cout<<"\n the character is a number";
 }
 getch();
 }
