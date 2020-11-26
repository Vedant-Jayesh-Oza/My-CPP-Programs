#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int pve=0,nve=0,zro=0,n,i;

 for(i=1;i<=10;i++)
 {
  cout<<"Enter No "<<i<<" ";
  cin>>n;

  if(n>0)
   pve++;
  if(n<0)
   nve++;
  if(n==0)
   zro++;
 }
 cout<<"\nTotal pve no are "<<pve;
 cout<<"\nTotal nve no are "<<nve;
 cout<<"\nTotal zro no are "<<zro;

 getch();
}