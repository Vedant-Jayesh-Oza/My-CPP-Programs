#include<iostream.h>
#include<conio.h>
void main()
{
    int rows;
    char ch;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter Character To be Printed: ";
    cin>>ch;

    for(int i=1; i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
          cout<<ch<<" ";
        }
        cout<<"\n";
    }

    getch();
}