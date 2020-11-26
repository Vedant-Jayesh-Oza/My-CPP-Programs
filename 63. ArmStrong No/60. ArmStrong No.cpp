#include<iostream.h>
#include<conio.h>
void main()
{
  int n,rem,sum=0;

  cout<<"Enter Any Number : ";
  cin>>n;

  int temp=n;

  while(n>0)
  {
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
  }

  if(temp==sum)
  cout<<"\nArmstrong No ";

  else
  cout<<"\nNot an ArmStrong No ";

  getch();
}