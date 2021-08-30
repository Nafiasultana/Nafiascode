#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    if(s[0]=='/'&&s[1]=='/')
        cout<<"This is a comment"<<endl;
    else if(s[0]=='/'&&s[1]=='*')
        {
            if(s[s.size()-2]=='*'&&s[s.size()-1]=='/')
            cout<<"This is a comment"<<endl;
        }
        else
            cout<<"This is not a comment"<<endl;

}
