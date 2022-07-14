#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }

    bool restArray = check(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);

}

int sorted(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }

    return (arr[n-1] > arr[n-2] && sorted(arr, n-1));
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout<<check(arr, 7)<<endl;
    cout<<sorted(arr, 7) << endl;

    return 0;
}
