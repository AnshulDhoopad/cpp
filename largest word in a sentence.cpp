#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0
    int curLen=0; maxLen=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curLen>maxLen){
                maxLen = curLen;
            }
        }
        else
            curLen++;

        if(arr[i]=='\0'){
            break;
        }

        i++;
    }


    return 0;
}
