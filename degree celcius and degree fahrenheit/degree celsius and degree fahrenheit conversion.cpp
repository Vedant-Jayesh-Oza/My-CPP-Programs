#include<iostream.h>
#include<fstream.h>
void main()
{
 ofstream fout;
 fout.open("marks.dat",ios::out);
 int rn[3],i;
 float mar[3];
   for(i=0;i<3;i++)
   {
     cout<<"\n ENTER ROLL NO OF ("<i+1<") STUDENT->";
     cin>>rn[i];
     cout<<"\n ENTER MARKS OF ("<i+1<") STUDENT->";
     cin>>mar[i];
     fcout<<rn<<"t"<<mar<<"\n";
   }
  fout.close();
}     
