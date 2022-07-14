#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    //spiral order print

    int rowStart = 0, rowEnd = n-1, columnStart = 0, columnEnd = m-1;

    while(rowStart<=rowEnd && columnStart<=columnEnd)
    {
        //for row start
        for(int col=columnStart; col<=columnEnd; col++)
        {
            cout<<a[rowStart][col]<<" ";
        }
        rowStart += 1;

        //for column end

        for(int row=rowStart; row<=rowEnd; row++)
        {
            cout<<a[row][columnEnd]<<" ";
        }
        columnEnd -= 1;

        //for row end

        for(int col=columnEnd; col<=columnStart; col--)
        {
            cout<<a[rowEnd][col] << " ";
        }
        rowEnd -= 1;

        //for column start

        for(int row=rowEnd; row<=rowStart; row--)
        {
            cout<<a[row][columnStart]<<" ";
        }
        columnStart += 1;
    }

    return 0;
}
