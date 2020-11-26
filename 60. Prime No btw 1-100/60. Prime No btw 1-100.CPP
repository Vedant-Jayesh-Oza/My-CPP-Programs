#include<iostream.h>
#include<conio.h>

void main()
{
    int low,high,i,flag;

    cout<<"Enter two numbers(intervals): ";
    cin>>low>>high;

    cout<<"Prime numbers between "<<low<<" and "<<high<<" are: ";

    while(low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << low << " ";

        low++;
    }

    getch();
}
