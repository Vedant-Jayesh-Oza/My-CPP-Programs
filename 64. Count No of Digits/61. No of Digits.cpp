#include<iostream.h>
#include<conio.h>
void main()
{
  int n,rem,i;

  cout<<"Enter Any Number : ";
  cin>>n;

  for(i=1;i<n;i++)
  {
    rem=n%10;
    n=n/10;
  }

  cout<<"\nNo of Digits : "<<i;

  getch();
}