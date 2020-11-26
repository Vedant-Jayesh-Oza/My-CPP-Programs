#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
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

 getch();

}