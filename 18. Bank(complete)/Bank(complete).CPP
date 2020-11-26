#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{


  int age,accno,decino;
  float amt=92354.5,amt2,amt3;
  char uname[20],type_acc,deci,name[20]="Rishil Shah";

  cout<<"***Welcome To National Bank***";
  lbl:
  cout<<"\n";
  cout<<"\nName : ";
  gets(uname);
  cout<<"\nAccount Number : ";
  cin>>accno;
  cout<<"\nAge : ";
  cin>>age;
  cout<<"\nType of Account(Current - c/Saving - s) : ";
  cin>>type_acc;

  if(accno==1234567890 && age==18 && type_acc=='c' && strcmp(uname,name)==0)
  {
   clrscr();
   cout<<"\n";
   cout<<"\nWelcome, "<<uname;
   lb2:
   cout<<"\n";
   cout<<"\nWould You Like To 1. View Your Details\n                  2. Withdraw Money\n                  3. Add Money\n                  4. Exit";
   cout<<"\nEnter Your Decision Number Here :- ";
   cin>>decino;
    if(decino==1)
    {
     clrscr();
     cout<<"\n";
     cout<<"\nYour Bank Acocunt Details Are";
     cout<<"\n*********************************";
     cout<<"\n|  Name : "<<uname<<"           |";
     cout<<"\n|  Age : "<<age<<"                     |";
     cout<<"\n|  Account No : "<<accno<<"      |";
     cout<<"\n|  Current Balance : "<<amt<<"    |";
     cout<<"\n|  Type Of Account : "<<type_acc<<"          |";
     cout<<"\n*********************************";

    cout<<"\n";

     cout<<"\nDo You Wan To Continue(y/n) : ";
     cin>>deci;
      if(deci=='y')
       {
        goto lb2;
       }
      else if(deci=='n')
       {
        goto lb3;
       }
    }

    if(decino==2)
    {
     clrscr();
     cout<<"\n";
     cout<<"\nYour Current Account Balance is "<<amt;
     cout<<"\nEnter The Ammount To Be Withdrawn : ";
     cin>>amt2;
     cout<<"\nYou Withdrawn Amount is "<<amt2;
     amt3=amt-amt2;
     cout<<"\nNow Your Current Balance is "<<amt3;
     cout<<"\n";

     cout<<"\nDo You Wan To Continue(y/n) : ";
     cin>>deci;
      if(deci=='y')
       {
        goto lb2;
       }
      else if(deci=='n')
       {
        goto lb3;
       }
    }

    if(decino==3)
    {
     clrscr();
     cout<<"\n";
     cout<<"\nYour Current Account Balance is "<<amt;
     cout<<"\nEnter The Ammount To Be Added : ";
     cin>>amt2;
     cout<<"\nYou Added Amount is "<<amt2;
     amt3=amt+amt2;
     cout<<"\nNow Your Current Balance is "<<amt3;
     cout<<"\n";

     cout<<"\nDo You Wan To Continue(y/n) : ";
     cin>>deci;
      if(deci=='y')
       {
        goto lb2;
       }
      else if(deci=='n')
       {
        goto lb3;
       }
    }

    if(decino==4)
    {
     lb3:
     cout<<"\n";
     cout<<"\nPress Enter To Exit";
    }

    else
    {
     cout<<"\n";
     cout<<"\nEnter The Number From the Range";
     goto lb2;
    }

  }

  else
  {
  cout<<"\n";
  cout<<"\nEntered Wrong Details, Try Again";
  goto lbl;
  }
  getch();
}