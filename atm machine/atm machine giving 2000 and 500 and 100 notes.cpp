//enter the the pin and give 2000,500 and 100 note
#include<iostream.h>
#include<conio.h>
void main()
{
 int pin=1313,upin;
 int value;
 cout<<"\n enter your pin : ";
 cin>>upin;

 if (upin==pin)
 {                                                   
  cout<<"\n enter the value : ";
  cin>>value;
  int k1=value/2000;
  int rem1=value%2000;
  int k2=rem1/500;
  int k3=(rem1%500)/100;

  cout<<"\n the number of 2000 notes : "<<k1;
  cout<<"\n the number of 500 notes :  "<<k2;
  cout<<"\n the number of 100 notes :  "<<k3;
  cout<<"\n thank you ";
  }
  else
  {
  cout<<"\n wrong pin entered";
  cout<<"\n access denied!! ";
  cout<<"\n re-enter the correct password!!";
  }
  getch();
  }

