#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
    int space=40,space2=3;

    cout<<setw(43)<<"*"<<endl;

    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1;j<=space2;j++)
        {
            cout<<" ";
        }
        cout<<"*";

        space-=2;
        space2+=4;
        cout<<"\n";
    }

    cout<<setw(55)<<"*    *   *   *   *    *  *"<<endl;

    getch();
}
