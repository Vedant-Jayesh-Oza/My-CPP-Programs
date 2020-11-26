#include<iostream.h>
#include<conio.h>
void main()
{
  int n,rev=0,rem;

  cout<<"Enter The No : ";
  cin>>n;

  while(n>0)
  {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
  }

  cout<<rev;
  getch();
}