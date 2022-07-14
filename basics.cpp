#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str(5, 'a');
    string sentence;

    getline(cin, sentence);

    cout<<sentence<<endl;

    str.clear();


    string st = "HelloBeetch";
    cout<<str<<"\n"<<st<<endl;

    string s1 = "fam";
    string s2 = "ily";





    s1.append(s2);
    cout<<s1<<endl;
    //or
    cout<<s1+s2<<endl;
    return 0;
}
