#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,i;

 cout<<"Enter Any no : ";
 cin>>n;

 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   cout<<i<<endl;
  }
 }

 getch();
}
