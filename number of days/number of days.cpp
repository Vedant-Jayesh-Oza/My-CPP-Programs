//display the total days into years,months and days
#include<iostream.h>
#include<conio.h>
void main()
{
 int ndays;
 cout<<"\n enter the number of days ";
 cin>>ndays;

 int years= ndays/365;
 int rem1=ndays%365;
 int weeks=rem1/7;
 int days=(rem1%7);

 cout<<"\n the years are" <<years;
 cout<<"\n the weeks are" <<weeks;
 cout<<"\n the days are" <<days;
 getch();
}
