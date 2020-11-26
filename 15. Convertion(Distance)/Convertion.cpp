#include<iostream.h>
#include<conio.h>
void main()
{
  int choice,kmf;
  agn:
  cout<<"Press 1 For Converting KM into M \nPress 2 For Converting M into CM \nPress 3 For Converting F into IN \nPress 4 For Converting F into CM\n";
  cin>>choice;

  if(choice==1)
  {
    cout<<"Enter The Distance in KM : ";
    cin>>kmf;
    cout<<"The Distance in M is : "<<kmf*1000;
  }

  if(choice==2)
  {
    cout<<"Enter The Distance in M : ";
    cin>>kmf;
    cout<<"The Distance in CM is : "<<kmf*100;
  }

  if(choice==3)
  {
    cout<<"Enter The Distance in F : ";
    cin>>kmf;
    cout<<"The Distance in IN is : "<<kmf*12;
  }

  if(choice==4)
  {
    cout<<"Enter The Distance in F : ";
    cin>>kmf;
    cout<<"The Distance in CM is : "<<kmf*30;
  }
  else
  {
    cout<<"Enter The No From RANGE\n";
    goto agn;
  }
  getch();
}