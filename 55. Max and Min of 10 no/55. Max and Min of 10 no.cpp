#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,i,max=0,min=32767;

 for(i=1;i<=10;i++)
 {
  cout<<"\nEnter No "<<i<<" ";
  cin>>n;

  if(n>max)
   max=n;

  if(n<min)
   min=n;
 }


 cout<<"\nMax no is "<<max;
 cout<<"\nMin no is "<<min;


 getch();

}
