#include<bits/stdc++.h>
using namespace std;


int threeSum(int arr[], int n)
{

    int maxsum=0;
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]<arr[j] && arr[j]<arr[k]){
                    sum = arr[i]+arr[j]+arr[k];
                    maxsum = max(sum, maxsum);
                }
            }sum=0;
        }
    }

    return maxsum;
}

int main()
{
    int arr[7] = { 2, 3, 12, 18, 6, 7, 8};
    cout<<threeSum(arr, 7);

    return 0;
}