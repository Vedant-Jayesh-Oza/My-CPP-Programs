#include<iostream.h>
#include<conio.h>
void main()
{
 int n,sum=0;

 cout<<"Enter Any no : ";
 cin>>n;


 for(int i=1;i<=n;i++)
 {
  cout<<i<<endl;
  sum+=i;
 }

 cout<<"Sum is : "<<sum;;

 getch();
}