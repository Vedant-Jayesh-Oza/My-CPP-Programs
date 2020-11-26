#include<iostream.h>
#include<conio.h>
void main()
{
   int year,week,days;
   cout<<"Enter The Number Of Days : ";
   cin>>days;

   year=days/365;
   week=(days%365)/7;
   days=((days%365)%7);
   cout<<"\n"<<year<<" Years";
   cout<<"\n"<<week<<" Week";
   cout<<"\n"<<days<<" Days";

   getch();

}