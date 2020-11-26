#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int e=0,o=0;
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
   if(n%2==0)
    {
     e++;
    }
   else
    {
     o++;
    }
  }
 }

 cout<<"\nEven no : "<<e;
 cout<<"\nOdd no : "<<o;

 getch();
}