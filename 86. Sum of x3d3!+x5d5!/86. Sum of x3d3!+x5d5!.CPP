#include<iostream.h>
#include<math.h>
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
    float sum=0,x,k=3;

    cout<<"x^3/3! + x^5/5! + x^7/7!...x^2n-1/2n-1!";
    cout<<"\nEnter X : ";
    cin>>x;
    cout<<"\nEnter no of Terms of X : ";
    cin>>n;

    for(float i=1;i<=n;i++)
    {
        sum+=pow(x,k)/fact(k);
        k+=2;
    }

    cout<<"\nSum is "<<sum<<endl;

    getch();
 }
