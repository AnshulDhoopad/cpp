#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int pivot = arr[r];

    for (int j = l; j < r-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i+1, r);
    return (i + 1);
}

void quickSort(int arr[], int l, int r)
{
    if(l<r){
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {10, 17, 4, 15, 20};
    quickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}