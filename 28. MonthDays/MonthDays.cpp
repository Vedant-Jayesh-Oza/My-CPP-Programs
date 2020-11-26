#include<iostream.h>
#include<conio.h>
void main()
{
 int month;

 cout<<"Enter The No Of Month : ";
 cin>>month;

 if(month==1||month==3||month==5||month==7||month==9||month==11)
 {
  cout<<"\nThe No Of Days ARE 31";
 }

 if(month==4||month==6||month==8||month==9||month==12)
 {
  cout<<"\nThe No OF Days aRE 30";
 }

 if(month==2)
 {
  cout<<"The No Of days are 28";
 }

 getch();

 }