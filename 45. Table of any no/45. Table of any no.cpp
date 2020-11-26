#include<iostream.h>
#include<conio.h>
void main()
{
 int n;

 cout<<"Enter Any no : ";
 cin>>n;

 cout<<"Table of "<<n<<endl;

 for(int i=1;i<=10;i++)
 {
  cout<<n<<"x"<<i<<"="<<n*i<<endl;
 }

 getch();
}