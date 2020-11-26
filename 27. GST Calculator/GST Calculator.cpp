#include<iostream.h>
#include<conio.h>
void main()
{

 float gst,pr_qty,prc;
 char type;

 cout<<"\nEnter The Type Of Product(appliance - a/food - f) : ";
 cin>>type;

 if(type=='a' || type=='A')
 {
  cout<<"\nEnter no Product purchased : ";
  cin>>pr_qty;
  cout<<"\nEnter Product Price : ";
  cin>>prc;
  cout<<"\nTotal Bill is "<<pr_qty*prc;
  cout<<"\nCGST Applied is 9%";
  cout<<"\nSGST Applied is 9%";
  cout<<"\nTotal Price Including GST is "<<(pr_qty*prc)+(pr_qty*prc*0.18);
 }

 if(type=='f' || type=='F')
 {
  cout<<"\nEnter no Product purchased : ";
  cin>>pr_qty;
  cout<<"\nEnter Product Price : ";
  cin>>prc;
  cout<<"\nTotal Bill is "<<pr_qty*prc;
  cout<<"\nCGST Applied is 2.5%";
  cout<<"\nSGST Applied is 2.5%";
  cout<<"\nTotal Price Including GST is "<<(pr_qty*prc)+(pr_qty*prc*0.05);
 }

 getch();

}

