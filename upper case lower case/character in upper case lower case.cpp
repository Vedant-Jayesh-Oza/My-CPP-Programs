//is the character upper case or lower case and then convert into opposite case
#include<iostream.h>
#include<conio.h>
void main()
{
 char ch;
 int a;
 cout<<"\n enter the character ";
 cin>>ch;
 a=int(ch);

 if(a>=65 && a<=91)
 {
  cout<<"\n the character is in upper case";
  cout<<"\n in lower case : "<<char(a+32);
 }
 else if (a>=97 && a<=123)
 {
 cout<<"\n the character is in lower case";
 cout<<"\n in upper case : "<<char(a-32);
 }
 getch();
 }
