#include<iostream.h>
#include<conio.h>
void main()
{
 float dist;
 int choice;

 cout<<"\nType 1 for CM to M";
 cout<<"\nType 2 for M to KM";
 cout<<"\nType 3 for FT to IN\n";
 cin>>choice;

 switch(choice)
 {
  case 1:
         cout<<"\nEnter Distance in CM : ";
         cin>>dist;
         cout<<"\nThe Distance in M is : "<<dist/100;
        break;

  case 2:
         cout<<"\nEnter Distance in M : ";
         cin>>dist;
         cout<<"\nThe Distance in KM is : "<<dist/1000;
        break;

  case 3:
         cout<<"\nEnter Distance in FT : ";
         cin>>dist;
         cout<<"\nThe Distance in IN is : "<<dist*12;
        break;

 }

 getch();

}
