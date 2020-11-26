#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n;
    float sum=0;
    cout<<"1/1^2 + 1/2^2 + 1/3^2...1/n^2";
    cout<<"\nEnter Value of n : ";
    cin>>n;

    for(double i=1;i<=n;i++)
    {
        sum+=1/pow(i,2);
    }

    cout<<"\nSum is "<<sum<<endl;

	getch();
}
