#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n;
 int a=0,b=1,c=0;

 cout<<"Enter No of elements of Fibocci Series : ";
 cin>>n;

 cout<<"1"<<endl;
 for(int i=1;i<n;i++)
 {
  c=a+b;
  a=b;
  b=c;
  cout<<c<<endl;
 }

 getch();
}
