#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "scjdsbcds";

    //convert string into upper case

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    //convert to lowercase

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='A' && str[i]<= 'Z')
        {
            str[i] += 32;
        }
    }

    cout<<str<<endl;

    //other option(using inbuilt function)
    //transform(str.begin(), str.end(), str().begin, ::toupper);



    //difference in aasci value
    //cout<<'a'-'A' << endl;


    return 0;
}
