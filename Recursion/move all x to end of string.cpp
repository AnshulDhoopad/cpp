#include<bits/stdc++.h>
using namespace std;

string movex(string str)
{
    if(str.length()==0){
        return "";
    }

    char ch = str[0];
    string restStr = movex(str.substr(1));
    if(ch == 'x')
    {
        return (restStr + ch);
    }
    return ch + restStr;
}

int main()
{

    cout<<movex("sadhxshaxsahxg")<<endl;

    return 0;
}