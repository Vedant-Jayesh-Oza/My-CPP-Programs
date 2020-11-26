#include<iostream.h>
#include<conio.h>
void main()
{
 float a,b,c;

 cout<<"Enter 3 sides of Triangle :\n";
 cin>>a>>b>>c;

 if(a+b>c && a+c>b && b+c>a)
 {
  cout<<"\nTriangle is Possible.";

 }
 else
  cout<<"\nTriangle is not possible ";


 getch();
}