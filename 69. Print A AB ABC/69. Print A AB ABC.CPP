#include<iostream.h>
#include<conio.h>
void main()
{
    int rows;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=65; i<rows+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
          cout<<char(j)<<" ";
        }
        cout<<"\n";
    }

    getch();
}