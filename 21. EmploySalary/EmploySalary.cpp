#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 int empno;
 char empname[30],desig[30],dep[30],grade;

 cout<<"\nEnter the Details Properly";
 cout<<"\nName : ";
 gets(empname);
 cout<<"\nEmploy Number : ";
 cin>>empno;
 cout<<"\nDepartment : ";
 cin>>dep;
 cout<<"\nDesignation : ";
 cin>>desig;
 lbl:
 cout<<"\nGrade : ";
 cin>>grade;
 if(grade=='A' || grade=='a')
 {
 cout<<"\nYour Basic Pay Allowence is Rs.10,000";
 cout<<"\nMedical Allowence Rs.500";
 cout<<"\nRent Allowence Rs.500";
 cout<<"\nProvident Fund Rs.700";
 cout<<"\nTotal Pay Salary id Rs.10,300";
 }

 else if(grade=='B' || grade=='b')
 {
 cout<<"\nYour Basic Pay Allowence is Rs.8,000";
 cout<<"\nMedical Allowence Rs.400";
 cout<<"\nRent Allowence Rs.400";
 cout<<"\nProvident Fund Rs.560";
 cout<<"\nTotal Pay Salary id Rs.8,240";
 }

 else if(grade=='C' || grade=='c')
 {
 cout<<"\nYour Basic Pay Allowence is Rs.6,000";
 cout<<"\nMedical Allowence Rs.300";
 cout<<"\nRent Allowence Rs.300";
 cout<<"\nProvident Fund Rs.420";
 cout<<"\nTotal Pay Salary id Rs.8,240";
 }

 else
 {
  cout<<"\nEnter The Grade From Range(A/B/C)";
  goto lbl;
 }

 getch();
}
