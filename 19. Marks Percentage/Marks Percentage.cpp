#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int rollno;
 float per,m1,m2,m3;
 char name[30],grade;

 cout<<"Etner The Following Details : ";
 cout<<"\nName : ";
 gets(name);
 cout<<"\nRoll Number : ";
 cin>>rollno;
 cout<<"\nMarks Of Subject 1(Out of 100) : ";
 cin>>m1;
 cout<<"\nMarks Of Subject 2(Out of 100) : ";
 cin>>m2;
 cout<<"\nMarks Of Subject 3(Out of 100) : ";
 cin>>m3;

 cout<<"\n";
 cout<<"\nThe Grand Total Of All 3 Sbjects is : "<<m1+m2+m3;
 per=(m1+m2+m3)/3;
 cout<<"\nThe Percentage Of The Student is : "<<per<<" %";

 if(per>80)
  cout<<"\nThe Grade is A";

 if(per<80 && per>65)
  cout<<"\nThe Grade is B";

 if(per<65)
  cout<<"\nThe Grade is C";


 getch();
}