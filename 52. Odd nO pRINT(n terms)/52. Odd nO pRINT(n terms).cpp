#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int odd,i;

 lbl:
 cout<<"Enter Any Odd no : ";
 cin>>odd;

 if(odd%2==0)
 {
  cout<<"\nEnter Odd no!!!";
  goto lbl;
 }

 else
 {
  for(i=odd;i>=1;i-=2)
  {
   cout<<i<<endl;
  }
 }

 getch();

}