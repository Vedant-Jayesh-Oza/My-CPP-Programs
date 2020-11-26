#include<iostream.h>
#include<conio.h>
void main()
{
 long int n;
 int count=0;
 cout<<"\n ENTER THE DIGITS : ";
 cin>>n;
 while(n!=0)
 {
 n/=10;
 ++count;
 }
 cout<<"\n THE NUMBER OF DIGITS ENTERED IS : "<<count;
 getch();
}  