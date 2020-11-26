#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,countp,countn;
 countp=0;
 countn=0;





 for(n=1;n<=10;n++)
 {
  cout<<"Enter Any 10 No :- ";
  cin>>i;
  if(i%2==0)
   {
    countp++;
   }
  else
   {
    countn++;
   }

 }

 cout<<"\nTotal Even No are :- "<<countp;
 cout<<"\n Total Odd No are :- "<<countn;
 getch();
}
