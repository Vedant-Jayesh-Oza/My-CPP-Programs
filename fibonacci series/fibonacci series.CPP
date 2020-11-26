#include<iostream.h>
#include<conio.h>

void main()
{
int i,no, first=0, second=1, next;
clrscr();
first=0;
second=1;
cout<<"Enter number of terms for Series: ";
cin>>no;
cout<<"Fibonacci series are: \n";
for(i=0; i<no; i++)
{
cout<<"\n"<<first;
next = first + second;
first = second;
second = next;
}
getch();
}
