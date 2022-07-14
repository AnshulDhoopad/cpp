#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    if(n==0){
        return n;
    }
    else
        return !(n & n-1);
}


int main()
{

    cout<<isPowerOf2(0)<<endl;

    return 0;
}
