#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,i;
 float sum=0;

 for(i=1;i<=10;i++)
 {
  cout<<"Enter No "<<i<<" ";
  cin>>n;

  sum+=n;
 }

 cout<<"\nAvg is "<<sum/10;

 getch();

}