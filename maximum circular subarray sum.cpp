#include<bits/stdc++.h>
using namespace std;

//max subarray sum = total sum of array - sum of non-contributing elemets

int kadane(int arr[], int n)
{
    //algorithm to find max sum of subarray witn complexity O(n)

    int currentSum = 0;
    int maxSum = INT_MIN
    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum = max(maxSum, currentSum)
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum+=arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalSum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;
}
