// school results
#include<iostream.h>
#include<conio.h>
void main()
{
char n[45] ;
int s1, s2, s3, s4, s5, roll_no;

  cout<<"\n ENTER YOUR ROLL NUMBER: ";
  cin>>roll_no;

   cout<<"\n ENTER YOUR NAME: ";
   cin>>n;

    cout<<"\n PHYSICS : ";
    cin>>s1;

    cout<<"\n CHEMISTRY : ";
    cin>>s2;

    cout<<"\n MATHS : ";
    cin>>s3;

    cout<<"\n COMPUTER SCIENCE : ";
    cin>>s4;

    cout<<"\n SOCIAL SCIENCE : ";
    cin>>s5;

    int grand_total=(s1+s2+s3+s4+s5);
    int percentage=(grand_total)/5;

    cout<<"\n  THE TOTAL MARKS IS : "<<grand_total;
    cout<<"\n  THE TOTAL PERCENTAGE IS : "<<percentage;

    if(percentage>=80)
    {
    cout<<"\n A GRADE        CONGRATULATIONS!!!!!!!!!!!";
    }
    if(percentage>=65 && percentage<80)
    {
    cout<<"\n B GRADE         GOOD!!!!!";
    }
    if(percentage<65)
    {
    cout<<"\n C GRADE         CAN DO BETTER :-( :-( :-( :-( :-( ";
    }
    if(percentage<50)
    {
    cout<<"\n YOU ARE FAIL     WORK HARD DONT LOOSE HOPE !!!!!!";
    }
    getch();
    }

