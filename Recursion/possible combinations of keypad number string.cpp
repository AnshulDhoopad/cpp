#include<bits/stdc++.h>
using namespace std;

string keypadstr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void combination(string str, string ans)
{
    if(str.length()==0) 
    {
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    string code = keypadstr[ch - '0'];
    string ros = str.substr(1);

    for(int i=0; i<code.length(); i++)
    {
        combination(ros, ans + code[i]);
    }
}

int main()
{

    combination("23", "");

    return 0;
}