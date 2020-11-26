#include<iostream.h>
#include<conio.h>

double fact(int a)
 {
   for(int i=1;i<a;i++)
    a *= i;
   
   return a;
 }

 void main()
 {
    int n;
    float sum=1;
    cout<<"1 + 1/1! + 1/2! + 1/3!...1/n!";
    cout<<"\nEnter Value of n : ";
    cin>>n;

    for(float i=1;i<=n;i++)
    {
        sum+=1/fact(i);
    }

    cout<<"\nSum is "<<sum<<endl;
	
	getch();
 }
