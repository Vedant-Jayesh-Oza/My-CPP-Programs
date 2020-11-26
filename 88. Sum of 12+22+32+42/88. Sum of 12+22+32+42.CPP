#include<iostream.h>
#include<conio.h>

void main()
{
    int n,sum=0,k=12;

    cout<<"12+22+32...";
    cout<<"\nEnter no of terms : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum+=k;
        k+=10;
    }

    cout<<"\nSum is "<<sum<<endl;

    getch();
}
