#include<iostream>
using namespace std;

void check(string s)
{
    int number[s.length()];
    int flag=1;
    for (int i=0; i<s.length(); i++)
    {
        number[i]=int (s[i]);
    }
    for(int i=0; i<s.length(); i++)
    {
        if(number[i]>=48 && number[i]<=57)
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Numeric Constant";
    }
    else
    {
        cout<<"Not Numeric";
    }

}

int main()
{
    string s;
    cout<<"Enter your Number:";
    cin>>s;
    check(s);
}
