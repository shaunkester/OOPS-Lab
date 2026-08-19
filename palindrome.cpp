#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout <<"Enter a word:"<<endl;
    cin>>s;
    cout <<"length:"<<s.length()<<endl;
    for(char &c:s)
    {c=toupper(c);}
    cout <<"Uppercase:"<<s<<endl;
    bool palindrome=true;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
        {
            palindrome=false;
            break;
        }
    }
    if(palindrome)
    {
        cout <<"The word is a palindrome."<<endl;
    }
    else
    {
        cout <<"The word is not a palindrome."<<endl;
    }
    return 0;
}