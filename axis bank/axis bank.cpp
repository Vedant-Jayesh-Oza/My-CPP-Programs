// bank operation
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int acc_no,avail_bal,op_year;
int amt_withdrawn,amt_deposit;
int choice2,cust_age;
char y;
char v,cust_name[30];
char type_acc;
cout<<"\n WELCOME TO AXIS BANK ";
cout<<"\n---------------------- ";
cout<<"\n please enter your details carefully ";
cout<<"\n please enter you account number :";
cin>>acc_no;
cout<<"\n please enter you name :";
gets(cust_name);
cout<<"\n please enter your age :";
cin>>cust_age;
cout<<"\n enter the type account:";
cin>>type_acc;
ved:
cout<<"\n enter the balance:";
cin>>avail_bal;
cout<<"\n enter the account opening year : ";
cin>>op_year;
if(avail_bal<10000)
{
cout<<"\n please maintain the minimum balance of rs 10000 ";
goto ved;
}

lbl2:
cout<<"\n 1. for withdrawal ";
cout<<"\n   2. for deposit ";
cout<<"\n 3. view statement ";
cout<<"\nEnter choice- ";
cin>>choice2;
if(choice2 ==1)
{
cout<<"\n amount to be withdrawn :";
cin>>amt_withdrawn;
cout<<"\n the remaining balance ="<<(avail_bal - amt_withdrawn);
}
if(choice2 ==2 )
{
cout<<"\n enter the amount to be deposited:";
cin>>amt_deposit;
cout<<"\n your available balance is = "<<(avail_bal+amt_deposit);
}
if(choice2==3)
{
cout<<"\n|------------------------------------------|";
cout<<"\n|       your account number:"<<acc_no      ;
cout<<"\n|       your name         :"<<cust_name    ;
cout<<"\n|       your age          :"<<cust_age     ;
cout<<"\n|       account opening year :"<<op_year   ;
cout<<"\n|------------------------------------------";
}
cout<<"\n do u want to continue y/n";
cin>>v;
if(v=='y')
{
goto lbl2;
}
else
{
cout<<"\n thank u have a nice day";
}
getch();
}
