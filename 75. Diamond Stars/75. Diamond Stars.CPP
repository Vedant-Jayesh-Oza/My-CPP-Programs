#include<iostream>
#include<conio.h>

void main()
{
    int space=36,space2=40;

    for(int i=1;i<=4;i++)
    {
        for(int k=1;k<=space2;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"  * ";
        }

        space2-=2;
        cout<<"\n";
    }

    for(int i=3;i>=1;i--)
    {
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"  * ";
        }

        space+=2;
        cout<<"\n";
    }

    getch();
}
