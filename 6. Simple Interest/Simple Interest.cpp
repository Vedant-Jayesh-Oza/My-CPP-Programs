#include<iostream.h>
#include<conio.h>
void main()
{
   float p,r,t;

   cout<<"Enter The Principal  Amount      : ";
   cin>>p;

   cout<<"\nEnter The Time Period In Years : ";
   cin>>t;

   if(p>100000)
   {
   cout<<"\n";
   cout<<"\nThe Rate Of Interest Applied Is 10%";
   cout<<"\n";
   cout<<"\nThe Simple Interest Calculated is : "<<p*10*t/100;
   cout<<"\n";
   cout<<"\nThe Total Amount To Pay is : "<<p+(p*10*t/100);
   }

   else
   {
   cout<<"\n";
   cout<<"\nThe Rate Of Interest Applied Is 15%";
   cout<<"\n";
   cout<<"\nThe Simple Interest Calculated is : "<<p*15*t/100;
   cout<<"\n";
   cout<<"\nThe Total Amount To Pay is : "<<p+(p*15*t/100);
   }



   getch();
}