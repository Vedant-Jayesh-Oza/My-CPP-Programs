// ente number and convert into days
#include<iostream.h>
#include<conio.h>
void main()
{
 int day;
 lbl:
 cout<<"\n enter the days :";
 cin>>day;
 if(day==1)
 {
 cout<<"\n it is SUNDAY";
 }
 else if(day==2)
 {
 cout<<"\n it is MONDAY";
 }
 else if(day==3)
 {
 cout<<"\n it is TUESDAY";
 }
 else if(day==4)
 {
 cout<<"\n it is WEDNESDAY";
 }
 else if (day==5)
 {
 cout<<"\n it is THURSDAY";
 }
 else if(day==6)
 {
 cout<<"\n it is FRIDAY";
 }
 else if(day==7)
 {
 cout<<"\n it is SATURDAY";
 }
 else
 {cout<<"\n enter the correct day";
 goto lbl;}
 getch();
 }

