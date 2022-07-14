#include<bits/stdc++.h>
using namespace std;

//place 2*1 tiles on 2*n matrix space

int tiling(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tiling(n-1) + tiling(n-2);
}

int main()
{

    cout << tiling(3) << endl;

    return 0;
}