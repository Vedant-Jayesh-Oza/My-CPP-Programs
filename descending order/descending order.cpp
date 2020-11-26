#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<"Enter number 1--";
cin>>a;
cout<<"Enter number 2--";
cin>>b;
cout<<"Enter number 3--";
cin>>c;

cout<<"Descending order is::: ";
if (a>=b&& b>=c&& a>=c)
{
cout<<"\nThe Descending order  is"<<a<<"> "<<b<<"> "<<c;
}
if (b>=a&& a>=c&& b>=c)
{
cout<<"\nThe Descending order  is"<<b<<"> "<<a<<"> "<<c;
}
if (c>=a&& c>=b&& a>=b)
{
cout<<"\nThe Descending order is"<<c<<"> "<<a<<"> "<<b;
}
getch();
}