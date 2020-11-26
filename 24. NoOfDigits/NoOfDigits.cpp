#include<iostream.h>
#include<conio.h>
void main()
{
 int no;

 cout<<"\nEnter Any No. Btw 1 - 999 : ";
 cin>>no;

 if(no>0 && no<10)
 {
  cout<<"\nThe No Entered is 1 Digit";
 }

 else if(no>9 && no<100)
 {
  cout<<"\nThe No Entered is 2 Digit";
 }

 else if(no>99 && no<1000)
 {
  cout<<"\nThe No Entered is 3 Digit";
 }
 getch();
}