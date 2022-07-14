#include<bits/stdc++.h>
using namespace std;

int nthfib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return (nthfib(n-1) + nthfib(n-2));
}


int main()
{


    cout<<nthfib(4)<<endl;


    return 0;
}
