#include<iostream.h>
#include<conio.h>

void main()
{
    int space=40,rows;

    cout<<"Enter No of Rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"  "<<i<<" ";
        }

        space-=2;
        cout<<"\n";
    }

    getch();
}
