#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
char str1[90],str2[100];
cout<<"\n Enter 2 strings ";
cin>>str1;
cin>>str2;
if(strlen(str1)>strlen(str2))
{
strcpy(str2,str1);
cout<<str1<<"\n"<<str2;
}
else if(strlen(str1)<strlen(str2))
{
strcpy(str2,str1);
cout<<str2<<"\n"<<str1;
}
getch();

}