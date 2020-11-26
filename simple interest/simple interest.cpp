//calculate simple interest
#include<iostream.h>
#include<conio.h>
void main ()
{
 double simpleinterest;
 double p;
 double r;
 double t;
 cout<< "\n enter the p : ";
 cin>>p;
 cout<< "\n enter the r : ";
 cin>>r;
 cout<< "\n enter the t : ";
 cin>>t;
 simpleinterest= p*r*t/100;
 cout<< "\n your simple interest : "<<simpleinterest;
 getch();
}