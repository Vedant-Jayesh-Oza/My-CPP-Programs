#include<iostream.h>
#include<conio.h>
void main()
{
int i,no;
cout<<"\n enter the the number for which you want it factors :";
cin>>no;

for(i=1;i<=no;i++)

if(no%i==0)
{
cout<<"\n the factor of the number is "<<i;
}

getch();

}
