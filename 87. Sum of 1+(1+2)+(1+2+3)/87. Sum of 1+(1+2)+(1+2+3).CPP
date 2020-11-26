#include<iostream.h>
#include<conio.h>

void main()
{
    int sum1=0,sum2=0,n;

    cout<<" 1+ (1+2) + (1+2+3)...";
    cout<<"\nEnter No of terms : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum1=0;
        for(int j=1;j<=i;j++)
        {
            sum1+=j;
        }

        sum2+=sum1;
    }

    cout<<"\nSum is "<<sum2<<endl;
    getch();
}
