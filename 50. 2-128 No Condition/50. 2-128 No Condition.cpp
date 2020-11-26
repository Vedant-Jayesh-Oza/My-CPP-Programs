#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 for(int i=2; ; )
 {
  cout<<i<<endl;
  if(i==128)
   break;

  i*=2;
 }

 getch();
}