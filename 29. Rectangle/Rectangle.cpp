#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int l,b,diagnl,c;
  cout<<"\nEnter Length : ";
  cin>>l;
  cout<<"\nEnter Breath : ";
  cin>>b;

  cout<<"\nPress 1 For Area of Rectangle";
  cout<<"\nPress 2 For Perimeter of Rectangle";
  cout<<"\nPress 3 For Diagonal of Rectangle\n";
  cin>>c;

  if(c==1)
  {
   cout<<"\nArea is "<<l*b;
  }

  if(c==2)
  {
   cout<<"\nPerimeter is "<<2*(l+b);
  }

  if(c==3)
  {
   diagnl=l*l+b*b;
   cout<<"\nDiagonal is "<<sqrt(diagnl);
  }

  getch();

}



