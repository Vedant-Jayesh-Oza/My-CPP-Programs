#include<iostream.h>
#include<conio.h>
void main()
{
   char ch;
   int a,b;

   cout<<"Enter The Character : ";
   cin>>ch;

   a=int(ch);

   if(a>64&&a<92)
   {
     cout<<"The Enrtered Alphabet is in Uppercase";
     b=a+32;
   }
   else if(a>96&&a<123)
   {
     cout<<"The Enrtered Alphabet is in Lowercase";
     b=a-32;
   }


   cout<<"\nThe Alternate Case Character is : "<<char(b);


   getch();

}