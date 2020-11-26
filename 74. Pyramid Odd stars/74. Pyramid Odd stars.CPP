#include<iostream.h>
#include<conio.h>

void main()
{
    int space=40,rows;

    cout<<"Enter No of Rows : ";
    cin>>rows;

    for(int i=1;i<=rows+2;i+=2)
    {
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"  * ";
        }

        space-=4;
        cout<<"\n";
    }

    getch();
}
