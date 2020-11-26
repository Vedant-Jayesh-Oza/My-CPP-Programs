//calculator using switch case
#include<iostream.h>
#include<conio.h>
void main()
{
    char o;
    float num1, num2;

    cout<<"\n ENTER ANY OPERATIONS :  \n+ \n- \n * \n / ";
    cin>>o;

    cout<<"\n ENTER NUMBER 1 : ";
    cin>>num1;

    cout<<"\n ENTER NUMMBER 2 : ";
    cin>>num2;

    switch (o)
    {
        case '+':
            cout<<"\n (num1+num2) = "<<(num1+num2);
            break;
        case '-':
            cout<<"\n (num1-num2) = "<<(num1-num2);
            break;
        case '*':
            cout<<"\n (num1*num2) = "<<(num1*num2);
            break;
        case '/':
            cout<<"\n (num1/num2) = "<<(num1/num2);
            break;
        default:
            cout<<"\n Error! operator is not correct";
            break;
     }
           getch();
    }
