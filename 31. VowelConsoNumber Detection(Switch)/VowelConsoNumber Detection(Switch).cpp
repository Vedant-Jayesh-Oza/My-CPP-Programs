#include<iostream.h>
#include<conio.h>
void main()
{
 char alpha;
 int no;

 cout<<"Enter Any Character : ";
 cin>>alpha;

 switch(alpha)
 {
  case 'a':case 'A':
  case 'e':case 'E':
  case 'i':case 'I':
  case 'o':case 'O':
  case 'u':case 'U':
                    cout<<"\nThe Entered Character is a Vowel";
                  break;

  case 1:case 2:
  case 3:case 4:
  case 5:case 6:
  case 7:case 8:
  case 9:case 0:
                cout<<"\nThe Entered Character is a Number";
               break;

  default:
          cout<<"\nThe Entered Character is a Consonant or Special Character";
         break;
 }

 getch();

}
