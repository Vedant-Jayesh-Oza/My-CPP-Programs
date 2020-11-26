#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
  char name[20];
  char desig[20];
  char dep[20];
  char grade;
  float gpay,medpay,hrent,pfund;
  lbl:
  clrscr();
  cout<<"\nEnter your name: ";
  cin>>name;
  cout<<"\nEnter your Designation: ";
  cin>>desig;
  cout<<"\nEnter your Department: ";
  cin>>dep;
  cout<<"\nEnter Grade: ";
  cin>>grade;
  if(grade=='A')
  {
    medpay=0.05*10000;
    hrent=0.05*10000;
    pfund=0.07*10000;
    gpay=medpay+hrent-pfund;
    cout<<"You are going to be paid "<<gpay;
  }
  else if(grade=='B')
  {
    medpay=0.05*8000;
    hrent=0.05*8000;
    pfund=0.07*8000;
    gpay=medpay+hrent-pfund;
    cout<<"You are going to be paid "<<gpay;
  }
  else if(grade=='C')

  {
    medpay=0.05*6000;
    hrent=0.05*6000;
    pfund=0.07*6000;
    gpay=medpay+hrent-pfund;
    cout<<"You are going to be paid "<<gpay;
  }
  else
  {
  cout<<"You have entered the wrong Grade. Please Enter from A,B,C. ";
  goto lbl;
  }
  getch();
  }



