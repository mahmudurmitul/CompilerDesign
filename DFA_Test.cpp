#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    cin>>s;

    int state = 0;

    for(int i=0;i<s.length();i++)
    {
        char c=s[i];

        if(state==0)
        {
            if(c=='b')
            {
                state=1;
            }
            else if(c=='a')
            {
                state=2;
            }
            else
            {
                state=-1;
            }
        }
        else if(state==1)
        {
            if(c=='b')
            {
                state=1;
            }
            else if(c=='a')
            {
                state=0;
            }
            else
            {
                state=-1;
            }
        }
        else if(state==2)
        {
            if(c=='a')
            {
                state=2;
            }
            else if(c=='b')
            {
                state=3;
            }
            else
            {
                state=-1;
            }
        }
        else if(state==3)
        {
            if(c=='a')
            {
                state=2;
            }
            else if(c=='b')
            {
                state=2;
            }
            else
            {
                state=-1;
            }
        }
        else
        {
            state=-1;
        }

        if(state==-1)
            break;
    }

    if(state==2)
    {
        cout<<"Accepted"<<endl;
    }
    else
    {
        cout<<"Rejected"<<endl;
    }

}

