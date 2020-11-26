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
    float sum=0,x;

    cout<<"x^1/1! + x^2/2! + x^3/3! + x^4/4!...x^n/n!";
    cout<<"\nEnter X : ";
    cin>>x;
    cout<<"\nEnter Power of X";
    cin>>n;

    for(float i=1;i<=n;i++)
    {
        sum+=pow(x,i)/fact(i);
    }

    cout<<"\nSum is "<<sum<<endl;
    
    getch();	
}
