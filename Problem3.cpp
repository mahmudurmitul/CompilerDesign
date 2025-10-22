#include<iostream>
using namespace std;

void check(string comment)
{
    for(int i=0; i<comment.length()-1; i++)
    {
        if(comment[i]=='/' && comment[i+1]=='/')
        {
            cout<<"Single Line Comment";
        }

        else if(comment[i]=='/' && comment[i+1]=='*')
        {
            for(int j=i+1; j<comment.length()-1; j++)
            {
                if(comment[j]=='*' && comment[j+1]=='/')
                {
                    cout<<"Multiple Line Comment";
                }
            }
        }
    }
}

int main()
{
    string text;
    cout<<"Enter your Text: ";
    getline(cin, text);
    check(text);
}
