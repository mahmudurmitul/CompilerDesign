#include <iostream>
using namespace std;

bool isKeyword(string s)
{
    return(s=="int"||s=="return");
}

int main()
{
    char ch;
    string w;

    while(cin.get(ch))
    {
        if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z'))
        {
            w=ch;
            while(cin.peek()!=EOF&&((cin.peek()>='a'&&cin.peek()<='z')||(cin.peek()>='A'&&cin.peek()<='Z')||(cin.peek()>='0'&&cin.peek()<='9')))
            {
                cin.get(ch);
                w+=ch;
            }

            if(isKeyword(w))
            {
                cout<<w<<" : Keyword"<<endl;
            }
            else
            {
                cout<<w<<" : Identifier"<<endl;
            }


            w.clear();
        }
        else if(ch>='0'&&ch<='9')
        {
            w=ch;
            while(cin.peek()!=EOF&&cin.peek()>='0'&&cin.peek()<='9')
            {
                cin.get(ch);
                w+=ch;
            }
            cout<<w<<" : Number"<<endl;
            w.clear();
        }
        else if(ch=='=')
        {
            cout<<ch<<" : Operator"<<endl;
        }
        else if(ch=='('||ch==')'||ch=='{'||ch=='}'||ch==';'||ch==',')
        {
           cout << ch << " : Punctuation" << endl;
        }

    }

}
