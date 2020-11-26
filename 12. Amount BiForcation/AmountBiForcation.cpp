#include<iostream.h>
#include<conio.h>
void main()
{
   lbl:
   int pin=1234;
   int upin,amt;

   cout<<"\nEnter The Security Pin : ";
   cin>>upin;

   if(pin==upin)
    {
     cout<<"The Pin Entered is Correct";
     cout<<"\nEnetr The Amount : ";
     cin>>amt;
     int two,five,one,fifty,twenty,ten,cfive,ctwo,cone;
     two=amt/2000;
     five=(amt%2000)/500;
     one=((amt%2000)%500)/100;
     fifty=(((amt%2000)%500)%100)/50;
     twenty=((((amt%2000)%500)%100)%50)/20;
     ten=(((((amt%2000)%500)%100)%50)%20)/10;
     cfive=((((((amt%2000)%500)%100)%50)%20)%10)/5;
     ctwo=(((((((amt%2000)%500)%100)%50)%20)%10)%5)/2;
     cone=(((((((amt%2000)%500)%100)%50)%20)%10)%5)%2;

     cout<<"\nYou Get "<<two<<" Two Thousand Rupees Notes ";
     cout<<"\nYou Get "<<five<<" Five Hundred Rupees Notes ";
     cout<<"\nYou Get "<<one<<" One Hundred Rupees Notes  ";
     cout<<"\nYou Get "<<fifty<<" Fifty Rupees Notes  ";
     cout<<"\nYou Get "<<twenty<<" Twenty Rupees Notes  ";
     cout<<"\nYou Get "<<ten<<" Ten Rupees Notes  ";
     cout<<"\nYou Get "<<cfive<<" Five Rupees Coin  ";
     cout<<"\nYou Get "<<ctwo<<" Two Rupees Coin  ";
     cout<<"\nYou Get "<<cone<<" One Rupee Coin  ";
    }
   else
    {
     cout<<"The Pin Entered Is Incorrect";
     goto lbl;
    }
   getch();

}