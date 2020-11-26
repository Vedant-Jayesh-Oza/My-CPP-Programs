#include<iostream.h>
#include<conio.h>
void main()
{
    float cel,fr,n;

    cout<<"Type 1 For C->F Or 2 For F->C : ";
    cin>>n;

    if(n==1)
    {
    cout<<"\nEnter Temp in Celcius : ";
    cin>>cel;
    cout<<"\nThe Temp in Farenhit is : "<<cel*1.8+32;
    }

    if(n==2)
    {
    cout<<"\nEnter Temp in Farienhiet : ";
    cin>>fr;
    cout<<"\nThe Temp in Celcius is : "<<(32+fr)*9/5;
    }

    getch();
}