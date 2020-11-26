#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    float n1, n2, n3;

    cout << "Enter Number 1 : ";
    cin >> n1;

    cout<<"\nEnter Number 2 : ";
    cin>> n2;

    cout<<"\nEnter Number 3 : ";
    cin>> n3;

    if(n1 >= n2 && n1 >= n3 && n2>=n3)
    {
        cout << "DESCENDING Order is "<<n1<<">"<<n2<<">"<<n3;
    }

    if(n1 >= n2 && n1 >= n3 && n3>=n2)
    {
        cout << "DESCENDING Order is "<<n1<<">"<<n3<<">"<<n2;
    }

    if(n2 >= n1 && n2 >= n3 && n1>=n3)
    {
        cout << "DESCENDING Order is "<<n2<<">"<<n1<<">"<<n3;
    }

     if(n2 >= n1 && n2 >= n3 && n3>=n1)
    {
        cout << "DESCENDING Order is "<<n2<<">"<<n3<<">"<<n1;
    }

    if(n3 >= n1 && n3 >= n2 && n1>=n2)
    {
        cout << "DESCENDING Order is "<<n3<<">"<<n1<<">"<<n2;
    }

    if(n3 >= n1 && n3 >= n2 && n2>=n1)
    {
        cout << "DESCENDING Order is "<<n3<<">"<<n2<<">"<<n1;
    }

    getch();
}