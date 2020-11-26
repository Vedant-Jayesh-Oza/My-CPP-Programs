#include<iostream.h>
#include<conio.h>
void main()
{
    float n1, n2, n3;

    cout << "Enter Number 1 : ";
    cin >> n1;

    cout<<"\nEnter Number 2 : ";
    cin>> n2;

    cout<<"\nEnter Number 3 : ";
    cin>> n3;

    if(n1 >= n2 && n1 >= n3)
    {
        cout << "\nLargest number: " << n1;
    }

    if(n2 >= n1 && n2 >= n3)
    {
        cout << "\nLargest number: " << n2;
    }

    if(n3 >= n1 && n3 >= n2) {
        cout << "\nLargest number: " << n3;
    }

    getch();
}