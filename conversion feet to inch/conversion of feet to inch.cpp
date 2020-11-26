//conversion of inch to feet and feet to inches
#include<iostream.h>
#include<conio.h>
void main()
{
int ft,inch;
double cm;
cout<<"\n enter the number in feet ";
cin>>ft;
cout<<"\n enter the number in inches ";
cin>>inch;

inch=(ft*12)+inch;

cout<<"\n the number of inches are : "<<inch;
cm=2.54*inch;
cout<<"\n the number of centimetres are : "<<cm;

getch();
}

