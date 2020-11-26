#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
cout<<"\n ENTER THE NUMBER : ";
cin>>n;
 while(i<n)
 { if(n%i==0)
 sum=sum+i;
 i++;
 }

 if(sum==n)
 {
 cout<<"\n THE NUMBER IS PERFECT ";
 }
 else
 {
 cout<<"\n THE NUMBER IS NOT PERFECT ";
 }
 getch();
 
}
