#include<iostream.h>
#include<conio.h>
void main()
{
  int n,rev=0,rem,temp=n;

  cout<<"Enter The No : ";
  cin>>n;

  while(n>0)
  {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
  }

  if(temp==rev)
  cout<<"\nPallindrome No!!!";
  else
  cout<<"\nNot Pallindrome No!!!";
  getch();
}