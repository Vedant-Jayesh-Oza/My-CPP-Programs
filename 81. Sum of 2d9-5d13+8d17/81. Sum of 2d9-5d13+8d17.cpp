#include<iostream.h>
#include<conio.h>

void main()
{
    float sum=0,a=2,b=9;
    int n,i;

    cout<<"Sum of 2/9 - 5/13 + 8/17....";
    cout<<"\nEnter No of terms : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {

        if(i%2!=0)
            sum+=(a/b);
        else
            sum-=(a/b);

        a+=3;
        b+=4;
    }

    cout<<"\nSum is : "<<sum;

    getch();
}
