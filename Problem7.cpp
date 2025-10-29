#include<iostream>
using namespace std;
string name(string first_name, string last_name)
{
    string full_name=first_name+" "+last_name;
    return full_name;
}
int main()
{
    string first_name;
    string last_name;
    cout<<"Enter your first name:";
    getline(cin, first_name);
    cout<<"Enter your last name:";
    cin>>last_name;

    cout<<"Full Name:"<<name(first_name, last_name);
}
