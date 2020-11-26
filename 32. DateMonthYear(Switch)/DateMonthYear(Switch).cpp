#include<iostream.h>
#include<conio.h>
void main()
{
 int date,month,year;

 cout<<"\nEnter Any Day : ";
 cin>>date;
 cout<<"\nEnter Any Month No : ";
 cin>>month;
 cout<<"\nEnter Any Year : ";
 cin>>year;

 switch(month)
 {
  case 1:
         cout<<"\nThe Date is :"<<date<<" January, "<<year;
        break;

  case 2:
         cout<<"\nThe Date is :"<<date<<" Febuary, "<<year;
        break;

  case 3:
         cout<<"\nThe Date is :"<<date<<" March, "<<year;
        break;

  case 4:
         cout<<"\nThe Date is :"<<date<<" April, "<<year;
        break;

  case 5:
         cout<<"\nThe Date is :"<<date<<" May, "<<year;
        break;

  case 6:
         cout<<"\nThe Date is :"<<date<<" June, "<<year;
        break;

  case 7:
         cout<<"\nThe Date is :"<<date<<" July, "<<year;
        break;

  case 8:
         cout<<"\nThe Date is :"<<date<<" August, "<<year;
        break;

  case 9:
         cout<<"\nThe Date is :"<<date<<" September, "<<year;
        break;

  case 10:
         cout<<"\nThe Date is :"<<date<<" October, "<<year;
        break;

  case 11:
         cout<<"\nThe Date is :"<<date<<" November, "<<year;
        break;

  case 12:
         cout<<"\nThe Date is :"<<date<<" December, "<<year;
        break;

 }

 getch();

}
