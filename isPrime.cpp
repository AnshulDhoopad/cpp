#include<bits/stdc++.h>
using namespace std;

void isPrime(int n)
{
    int arr[n];
    for(int i=2; i<n; i++)
    {
        arr[i] = 0;
    }

    for(int i=2; i<n; i++)
    {
        for(int j = i*i; j<n; j+=i)
        {
            if(arr[j]==0)
            {
                arr[j] = 1;
            }
        }
    }

    for(int i=2; i<n; i++)
    {
        if(arr[i] == 0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{


    isPrime(50);

    return 0;
}
