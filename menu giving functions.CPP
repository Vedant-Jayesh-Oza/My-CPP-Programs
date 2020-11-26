#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip.h>
char option;

void prime()
{
    int n,i;
    bool isPrime = true;

   cout<<"\nEnter Any No : ";
   cin>>n;

    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
     cout<<"\nEntered no is not Prime";
     isPrime = false;
     break;
    }
   }
   if(isPrime)
   cout<<"\nEntered NO is Prime";

}

void armstrong()
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
}

void perfect()
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

 }

 void lcmhcf()
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

}


int main()
{


    system("cls");
    do
    {

    system("pause");
    system("cls");
    cout<<"***which operation you want to perform***\n";
    cout<<"press 0 for exit\n";
    cout<<"press 1 for checking prime number  \n";
    cout<<"press 2 for checking armstrong number \n";
    cout<<"press 3 for checking perfect number  \n";
    cout<<"press 4 for finding lcm and hcf\n";
    cout<<"press option:";
    cin>>option;
    switch(option)
    {
              case '1':
              prime();
              break;

              case '2':
              armstrong();
              break;

              case '3':
              perfect();
              break;

              case '4':
              lcmhcf();
              break;

              case '0':
              exit(0);
              default:
              
              cout<<"invalid input"  ;
              system("cls");

     }
    }
    while(option!='0');
    getch();
 }