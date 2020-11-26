#include<iostream.h>
#include<conio.h>
void main(void)
{
    char name[50],ch[11];
    int x;
    clrscr();
    do
    {
        x=0;
        cout<<"\n                            Welcome to KBC";
        cout<<"\n\n Enter your name: ";
        cout<<"\n";
        cin>>name;
        cout<<"\n Enter answer in form of 'a','b','c'and'd' only or press q to quit and win the valid money ";
        cout<<"\n";
        cout<<"\n the first question of rs 1000 is in front of you on your screen ";
        cout<<"\a";
        cout<<"\n";

        cout<<"\n Q1.WHICH OF THE FOLLOWING NAME MEANS PERSON OF LONG AGE?";
        cout<<"\n";
        cout<<"\n a.amitabh";
        cout<<"\n";
        cout<<"\n b.arunodaya";
        cout<<"\n";
        cout<<"\n c.abhishek";
        cout<<"\n";
        cout<<"\n d.ayushmaan";

        cin>>ch[1];
        if(ch[1]=='d')
        {
            x=1000;
            cout<<"\n Good Job.";
            cout<<"\n YOU WON RS "<<x;
        }

        else if(ch[1]=='q')
        {
        cout<<"\n  thankyou for  playing with us you won rs  "<<x;
        break;
        }

        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME ";
            cout<<"\n you won rs "<<x;
            break;
        }



        cout<<"\n the next question of rs 5000 is in front you you ";
        cout<<"\a";
        cout<<"\n";

        cout<<"\n Q2.In which sports has jwala gutta been a 13 time champion ";
        cout<<"\n";
        cout<<"\n a.badminton";
        cout<<"\n";
        cout<<"\n b.squash";
        cout<<"\n";
        cout<<"\n c.cricket";
        cout<<"\n";
        cout<<"\n d.chess";
        cout<<"\n";
        cin>>ch[2];
        if(ch[2]=='a')
        {
            x=5000;
            cout<<"\n Good Job.";
            cout<<"\n YOU WON RS "<<x;

        }
        else if(ch[2]=='q')
        {
        cout<<"\n thankyou for playing with us you have won rs "<<x;
        break;
        }

        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME";
            cout<<"\n you won rs "<<x-1000;
            break;
        }


        cout<<"\n next question of rs 8000 is in front of you ";
        cout<<"\a";
        cout<<"\n";
        cout<<"\n Q3.which of these union portfolios have dinesh trivedi,mukul roy & pawan kumar bansal held at some point in 2012";
        cout<<"\n";
        cout<<"\n a.Coal";
        cout<<"\n";
        cout<<"\n b.railways";
        cout<<"\n";
        cout<<"\n c.chemicals and fertilizers";
        cout<<"\n";
        cout<<"\n d.commerce and study";
        cout<<"\n";
        cin>>ch[3];
        if(ch[3]=='b')
        {
            x=8000;
            cout<<"\n Good Job.";
            cout<<"\n YOU WON RS "<<x;
        }

        else if(ch[3]=='q')
        {
        cout<<"\n thank you for playing with us you won rs "<<x;
        break;
        }

        else
        {
            cout<<"\nSorry wrong answer. YOU HAVE TO LEAVE THE GAME";
            cout<<"\n you won rs "<<x-5000;
            break;
        }
        cout<"\n THE NEXT QUESTION OF RS 10000 IS ON YOUR COMPUTER SCREEN ";
        cout<<"\n";
        cout<<"\a";


        cout<<"\n Q4.at which of these places did chanakya get chandragupta maurya trained in the art of war and politics";
        cout<<"\n";
        cout<<"\n a.Kashi";
        cout<<"\n";
        cout<<"\n b.Takshashila";
        cout<<"\n";
        cout<<"\n c.Ujjain";
        cout<<"\n";
        cout<<"\n d.Nalanda ";
        cout<<"\n";
        cin>>ch[4];
        if(ch[4]=='b')
        {
            x=10000;
            cout<<"\n Good Job.";
            cout<<"\n You Won Rs "<<x;
        }
        else if(ch[4]=='q')
        {
        cout<<"\n THANK YOU FOR PLAYING WITH US YOU WON RS "<<x;
        break;
        }

        else
        {
            cout<<"sorry wrong answer. YOU HAVE TO LEAVE THE GAME";
            cout<<"\n You won rs "<<x-8000;
            break;
        }

        cout<<"\n CONGRATULATIONS YOU HAVE ENTERED INTO NEXT ROUND NOW IF YOU LOOSE YOU WILL RECEIVE THE BASE AMT RS 10000";
        cout<<"\n";
        cout<<"\n THE NEXT QUESTION OF RS 20000 IS ON YOUR COMPUTER SCREEEN";
        cout<<"\a";
        cout<<"\n";

        cout<<"\n Q5.Which police officer's biography is titled 'I Darel'";
        cout<<"\n";
        cout<<"\n a.Kiran Bedi";
        cout<<"\n";
        cout<<"\n b.J.F Ribeiro";
        cout<<"\n";
        cout<<"\n c.Hemant karkare";
        cout<<"\n";
        cout<<"\n d.K.P.S. Gill";
        cout<<"\n";
        cin>>ch[5];
        if(ch[5]=='a')
        {
            x=20000;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }

        else if(ch[5]=='q')
        {
        cout<<"\n THANK YOU FOR PLAYING WITH US YOU WON RS "<<x;
        break;
        }
        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME";
            cout<<"\n YOU WON RS "<<x;
        }
        cout<<"\n Q6.What title did mahatma gandhi give to his 1908 translation of john ruskin's work,Unto the last ";
        cout<<"\n";
        cout<<"\n a.Satyagraha";
        cout<<"\n";
        cout<<"\n b.Sarvodaya";
        cout<<"\n";
        cout<<"\n c.Ahimsa";
        cout<<"\n";
        cout<<"\n d.Khilafat";
        cout<<"\n";
        cin>>ch[6];
        if(ch[6]=='b')
        {
            x=40000;
            cout<<"\n Good Job.";
            cout<<"\n Your won rs "<<x;
        }
        else if(ch[6]=='q')
        {
        cout<<"\n THANK YOU FOR PLAYING WITH US YOU WON RS "<<x;
        break;
        }

        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME";
            cout<<"\n you won rs 10000";
            break;
        }

        cout<<"\n NEXT QUESTION OF RS 80000 IS ON YOU COMPUTER SCREEN ";
        cout<<"\n";
        cout<<"\a";
        
        cout<<"\n Q7.What is called as ' THE WINDY CITY?";
        cout<<"\n";
        cout<<"\n a.Jerusalem";
        cout<<"\n";
        cout<<"\n b.Japan";
        cout<<"\n";
        cout<<"\n c.Chicago";
        cout<<"\n";
        cout<<"\n d.delhi";
        cout<<"\n";
        cin>>ch[7];
        if(ch[7]=='c')
        {
            x=80000;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }

        else if(ch[7]=='q')
        {
        cout<<"\n THANK YOU FOR PLAYING WITH US YOU WON RS "<<x;
        break;
        }

        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME ";
            cout<<"\n YOU WON RS 10000 ";
            break;
        }
        cout<<"\n Q8.What is called as ' THE LAND OF WHITE ELEPHANTS'?";
        cout<<"\n a.Bangladesh";
        cout<<"\n b.Thailand";
        cout<<"\n c.India";
        cin>>ch[8];
        if(ch[8]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer. YOU HAVE TO LEAVE THE GAME";

        }
        cout<<"\n Q9.What is called as ' THE CITY OF SEVEN HILLS'?";
        cout<<"\n a.Rome";
        cout<<"\n b.Nilgiri Hills";
        cout<<"\n c.Tibet";
        cin>>ch[9];
        if(ch[9]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto abc;
        }
        cout<<"\n Q10.What is called as ' THE DARK CONTIENENT'?";
        cout<<"\n a.Asia";
        cout<<"\n b.Australia";
        cout<<"\n c.Africa";
        cin>>ch[10];
        if(ch[10]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        abc:
        if(x==100)
        {
            cout<<"\n No cheating...... "<<name<<" you have done this earlier also.";
            break;
        }
        if(x==90)
        {
            cout<<"\n "<<name<<" you are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(x==80)
        {
            cout<<"\n "<<name<<" you are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==x||x==70||x==60)
        {
            cout<<"\n "<<name<<" you are average";
            cout<<"\n Your Score is "<<x<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(x<=40)
            cout<<"\n No use........ Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>ch[11];
    }
    while(ch[11]=='Y'||ch[11]=='y');
    getch();
}


