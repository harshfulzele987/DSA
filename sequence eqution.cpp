#include<bits/stdc++.h>
using namespace std;
int i,j;
int  main()
{
    int n;
    cin>>n;
    int arr[n],temp,flag;
    for ( i=1;i<=n;i++)
    {
        cin>>arr[i];

        for(j=1;j<=n;j++)
        {
            if(i==arr[j])
            {
            temp=j;
            cout<<arr[arr[temp]];
            }
        }


    }
}
