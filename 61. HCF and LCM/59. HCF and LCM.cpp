#include<iostream.h>           -
#include<conio.h>
void main()
{
  int n1,n2,HCF=0;

  cout<<"Enter 2 no to Find HCF & LCM : ";
  cin>>n1>>n2;

  if(n1>n2)
  {
    int min=n2;

    for(int i=min;i>1;i--)
    {
      if(n1%i==0 && n2%i==0)
      {
        HCF=i;
        break;
      }
    }
  }

  if(n2>n1)
  {
    int min=n1;

    for(int i=min;i>1;i--)
    {
      if(n1%i==0 && n2%i==0)
      {
        HCF=i;
        break;
      }
    }
  }

  cout<<"\nHCF : "<<HCF;
  cout<<"\nLCM : "<<(n1*n2)/HCF;

  getch();

}


                                 `
