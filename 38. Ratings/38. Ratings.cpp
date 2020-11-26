#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int rat,n;
 char name[30];

 cout<<"Enter No of Customers : ";
 cin>>n;

 for(int i=0;i<n;i++)
 {
 cout<<"\nEnter Name : ";
 gets(name);
 cout<<"\nEnter RATINGS : ";
 cin>>rat;

  switch(rat)
  {
  case 1:
        cout<<name<<" gave * ";
        break;

  case 2:
        cout<<name<<" gave ** ";
        break;

  case 3:
        cout<<name<<" gave *** ";
        break;

  case 4:
        cout<<name<<" gave **** ";
        break;

  case 5:
        cout<<name<<" gave ***** ";
        break;

  }
 }

 getch();

}