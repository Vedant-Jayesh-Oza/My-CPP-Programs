#include<iostream.h>
#include<conio.h>
void main()
{
   char ch;
   int a;
   cout<<"Enter : ";
   cin>>ch;
   a=int(ch);
   if((a>64&&a<92)||(a>96 && a<123))
   {
     cout<<"\nThe Enrtered Value is an Alphabet";
   }
   else if(a>44&&a<55)
   {
     cout<<"\nThe Enrtered Value is a Number";
   }
   getch();

}