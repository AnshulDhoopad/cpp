#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int currentNum;
    int powerOf2 = 1;
    while(powerOf2<=n){
        powerOf2 *= 2;
    }

    while(powerOf2>0){
        currentNum = n/powerOf2;
        n -= currentNum*powerOf2;
        powerOf2 /= 2;
        ans = ans*10 + currentNum;
    }
    return ans;
}

int main()
{

    cout<<decimalToBinary(19)<<endl;

    return 0;
}
