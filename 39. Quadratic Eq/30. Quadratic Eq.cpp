#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c;
 int d;

 cout<<"Enter Co-ef of x2 : ";
 cin>>a;
 cout<<"\nEnter Co-ef of x : ";
 cin>>b;
 cout<<"\nEnter Constant : ";
 cin>>c;

 d=(b*b)-(4*a*c);

 if(d>0)
 {
  cout<<"\nEq is "<<a<<"x^2 + "<<b<<"x + "<<c;
  cout<<"\n the roots are real and unequal ";
  cout<<"\nRoot 1 : "<<(-b+sqrt(d))/(2*a);
  cout<<"\nRoot 2 : "<<(-b-sqrt(d))/(2*a);
 }

 if(d<0)
 {
  int d1;
  d1=(4*a*c)-(b*b);
  cout<<"\nEq is "<<a<<"x^2 + "<<b<<"x + "<<c;
  cout<<"\nRoots are Complex";
  cout<<"\nRoot 1 : "<<(-b)/(2*a)<<" +i"<<(sqrt(d1))/(2*a);
  cout<<"\nRoot 2 : "<<(-b)/(2*a)<<" -i"<<(sqrt(d1))/(2*a);
 }

 if(d==0)
 {
   cout<<"\nEq is "<<a<<"x^2 + "<<b<<"x + "<<c;
  cout<<"\nRoot are Equal : "<<-b/(2*a);
 }
 
 getch();
}