#include<iostream.h>
#include<conio.h>
void main()
{
  int n;

  cout<<"Enter The Number : ";
  cin>>n;

  if(n%2==0 && n>0)
   {
    cout<<"The Number Entered is Even and Is Positive";
    cout<<"\nThe Cube Of The Number is "<<n*n*n;
   }

  if(n%2==0 && n<0)
   {
    cout<<"The Number Entered is Even and Is Negative";
    cout<<"\nThe Cube Of The Number is "<<n*n*n;
   }
   if(n%2!=0 && n<0)
   {
    cout<<"The Number Entered is Odd and Is Negative";
    cout<<"\nThe Square Of The Number is "<<n*n;
   }
   if(n%2!=0 && n>0)
   {
    cout<<"The Number Entered is Odd and Is Positive";
    cout<<"\nThe Square Of The Number is "<<n*n;
   }

  getch();

}
