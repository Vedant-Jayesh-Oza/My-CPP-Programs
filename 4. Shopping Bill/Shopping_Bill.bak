#include<iostream.h>
#include<conio.h>
void main()
{
   int prdt_code,prdt_qty;
   float prdt_prce,bill,disc10,disc5;

   cout<<"....Welcome To The Shopping Mall....";
   cout<<"\n************************************";

   cout<<"\n->  Enter Product Code     : ";
   cin>>prdt_code;

   cout<<"\n->  Enter Product Price    : ";
   cin>>prdt_prce;

   cout<<"\n->  Enter Product Quantity : ";
   cin>>prdt_qty;

   bill=prdt_prce*prdt_qty;

   cout<<"\n->  The Amount To Pay : "<<bill;
   cout<<"\n";

   if(bill>999)
   {
   cout<<"\n....Congo, You Got 10% Discount....";
   disc10=bill-bill*0.10;
   cout<<"\n";
   cout<<"\nThe Discounted Amount To Pay : "<<disc10;
   cout<<"\n";
   }

   else if(bill<1000 && bill>499)
   {
   cout<<"\n....Congo You Got 5% Discount";
   cout<<"\n";
   disc5=bill-bill*0.05;
   cout<<"\nThe Discounted Price To Pay : "<<disc5;
   cout<<"\n";
   }

   else
   cout<<"\n";

   cout<<"\n    Thank You For Shopping";
   cout<<"\n";

   cout<<"\n         Visit Again";
   cout<<"\n    **********************";

   getch();

}

