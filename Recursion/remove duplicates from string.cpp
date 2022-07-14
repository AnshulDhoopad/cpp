#include<bits/stdc++.h>
using namespace std;

string removeDup(string str) {
    if(str.length() == 0)
    {
        return "";
    }
    char ch = str[0];
    string restStr = removeDup(str.substr(1));
    if(ch == restStr[0]){
        return restStr;
    }
    return (ch + restStr);
}

int main()
{

    cout<<removeDup("aaaaaabbbbccccdddd");
    return 0;
}