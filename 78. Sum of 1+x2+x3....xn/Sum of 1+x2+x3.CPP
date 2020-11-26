#include<iostream.h>
#include<math.h>
#include<conio.h>

void main()
{
  int n,p,terms,sum=1;

  cout<<"1 + x^1 + x^2 .... + x^n";
  cout<<"\nEnter The Value of x and n : ";
  cin>>n>>terms;

  for(int i=1;i<=terms;i++)
  {
      sum=sum+pow(n,i);
  }

  cout<<"\nSum is : "<<sum<<endl;
  
  getch();
}
