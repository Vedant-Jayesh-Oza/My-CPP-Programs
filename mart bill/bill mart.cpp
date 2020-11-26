//mart bill
#include<iostream.h>
#include<conio.h>
void main()
{
  int code, price, cgst, sgst, quantity,finalbill,discamount;
  int bill;
  cout<<"\n enter the product code : ";
  cin>>code;
  cout<<"\n enter the product price : ";
  cin>>price;
  cout<<"\n enter the cgst price : ";
  cin>>cgst;
  cout<<"\n enter the sgst price : ";
  cin>>sgst;
  cout<<"\n enter the product quantity : ";
  cin>>quantity;
  cout<<"\n -------------------------- ; ";
  bill= price*quantity + cgst + sgst;
  cout<<"\n the bill will be : "<<bill;

  if (bill>4000)
{
 finalbill = bill- (0.20 * bill);
 cout<<"\n the bill final price : " <<finalbill;
}

 else if (bill>2000 && bill<4000)
{
 discamount= 0.06*bill;
 finalbill = bill -(0.06*bill);
 cout<<"\n your discamount : " <<discamount;
 }
 getch();
}
