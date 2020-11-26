#include<iostream.h>
#include<conio.h>
void main()
{
 int n1,n2;
 char opr;

 cout<<"\nEnter First Digit  : ";
 cin>>n1;

 cout<<"\nEnter sECOND dIGIT : ";
 cin>>n2;

 cout<<"\nEnter The oPERATOR(+,-,x,/): ";
 cin>>opr;

 if(opr=='+')
 {
  cout<<"\nThe Addition is : "<<n1+n2;
 }

 if(opr=='-')
 {
  cout<<"\nThe Subtraction is : "<<n1-n2;
 }

 if(opr=='x')
 {
  cout<<"\nThe Multiplication is : "<<n1*n2;
 }

 if(opr=='/')
 {
  cout<<"\nThe Division is : "<<n1/n2;
 }

 getch();

}

