#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if(s.length() == 0){
        return;
    }

    string reststring = s.substr(1);
    reverse(reststring);
    cout << s[0];
}

int main()
{
    reverse("anshul");

    return 0;
}