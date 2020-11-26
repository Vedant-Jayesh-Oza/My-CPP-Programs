#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    float sum=0,k=1;

	cout<<"1 + 1/3 + 1/5 + 1/7...1/2n-1";
    cout<<"\nEnter Value of n : ";
    cin>>n;

    for(float i=1;i<=n;i++)
    {
        sum+=1/k;
        k+=2;
    }

    cout<<"\nSum is "<<sum<<endl;

	getch();
}
