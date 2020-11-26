#include<iostream.h>
#include<conio.h>

void main()
{
    int space=40,rows;

    cout<<"Enter No of Rows : ";
    cin>>rows;

    for(int i=rows;i>=1;i--)
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
