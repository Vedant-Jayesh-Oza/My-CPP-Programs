#include<iostream.h>
#include<conio.h>
void main()
{
 float dist,dist2;
 char choice;
 lbl:
 cout<<"\nType a to find Area Of Circle";
 cout<<"\nType t to find Area Of Triangle";
 cout<<"\nType s to find Area Of Square";
 cout<<"\nType r to find Area Of Rectangle\n";
 cin>>choice;

 switch(choice)
 {
  case 'a':case'A':
                   cout<<"\nEnter Radius of Circle : ";
                   cin>>dist;
                   cout<<"\nThe Area is : "<<dist*dist*3.14;
                  break;

  case 't':case'T':
                   cout<<"\nEnter height of Triangle : ";
                   cin>>dist;
                   cout<<"\nEnter base of Triangle : ";
                   cin>>dist2;
                   cout<<"\nThe Area is : "<<dist*dist2*0.5;
                  break;

  case 's':case'S':
                   cout<<"\nEnter Side of Square : ";
                   cin>>dist;
                   cout<<"\nThe Area is : "<<dist*dist;
                  break;

  case 'r':case'R':
                   cout<<"\nEnter length of Rectangle : ";
                   cin>>dist;
                   cout<<"\nEnter breath of Rectangle : ";
                   cin>>dist2;
                   cout<<"\nThe Area is : "<<dist*dist2;
                  break;

  default:
         cout<<"\nEnter Choice from The Range";
         goto lbl;

 }

 getch();

}