#include<iostream.h>
#include<conio.h>
void main()
{
 float cel,cm,n,rup;

 cout<<" Type 1 For Cm->In \n Type 2 For C->F \n Type 3 For Rupees To Dollar : ";
 cin>>n;

 if(n==1)
 {
  cout<<"\nEnter The Distance in CM : ";
    cin>>cm;
    cout<<"The Distance in IN is : "<<cm/2.5;
 }

 if(n==2)
    {
    cout<<"\nEnter Temp in Celcius : ";
    cin>>cel;
    cout<<"\nThe Temp in Farenhit is : "<<cel*1.8+32;
    }

 if(n==3)
  {
   cout<<"\nEnter Amount in Rupees : ";
   cin>>rup;
   cout<<"\nThe Amount in Dollar is : "<<rup/66;
  }

 getch();
}
