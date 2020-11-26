#include<iostream.h>
#include<conio.h>

double fact(int a)
 {
  int ans = 1;
  int i;
  for(i=1;i<=a;i++)
   {
    ans *= i;
   }
   return ans;
 }

 void main()
 {
    int n;
    float sum=1,k=3;
    cout<<"1 + 1/3! + 1/5! + 1/7!...1/2n-1!";
    cout<<"\nEnter Value of n : ";
    cin>>n;

    for(float i=1;i<=n;i++)
    {
        sum+=1/fact(k);
        k+=2;
    }

    cout<<"\nSum is "<<sum<<endl;
	
	getch();

 }
