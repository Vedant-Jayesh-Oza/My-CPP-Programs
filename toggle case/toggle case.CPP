#include<iostream.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
    char str[50];
    cout<<"\n Enter a string : ";
    gets(str);
    for (int i=0;str[i]!=0;i++)
    {
        if (isalpha(str[i]))
           {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
            }
            else
	         {
            cout<<"\n Entered string is not alphabetical.";
            }
    }
    cout << "Resultant string : " << str;
    getch();
}
