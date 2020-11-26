#include<iostream.h>
#include<conio.h>
void main()
{
 int leap;

 cout<<"\nEnter Any Year : ";
 cin>>leap;

 if(leap%4==0)
 {
  cout<<"\nThe Year is Leap Year";
 }

 if(leap%4!=0)
 {
  cout<<"\nThe Year is not a Leap Year";
  cout<<"\nThe Leap Year will be after "<<(leap%4);
 }

 getch();

}