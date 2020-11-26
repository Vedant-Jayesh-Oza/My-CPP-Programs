#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 for(int i=1; ;i++)
 {
  int n;
  cin>>n;

  if(n==0)
  {
   cout<<"\nYou made it out of the loop";
   break;
  }
  else
  {
   cout<<"\nYou didnt made it";
  }
 }
 getch();
}