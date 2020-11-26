#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i;
char a[50];
cout<<"\n enter the string ";
gets(a);
for(i=0;a[i]!=0;i++)
if(a[i]==' ')
a[i]='#';
cout<<"\n the new string is "<<a;
getch();
}