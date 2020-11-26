#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    float sum=1;
    
	cout<<"1 + 1/1 + 1/2 + 1/3...1/n";
    cout<<"\nEnter Value of n : ";
    cin>>n;

    for(double i=1;i<=n;i++)
    {
        sum+=1/i;
    }

    cout<<"\nSum is "<<sum<<endl;

	getch();
}