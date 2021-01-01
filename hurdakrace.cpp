#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,flag=0;
    cin>>n;
    int arr[n];
    cin>>m;
        for( int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for( int i=0;i<n;i++)
        {
            if(arr[n-1]<m)
            flag=1;
            else
            z=arr[n-1]-m;
        }
        if (flag==0)
        cout <<z;
        else
        cout<<"0";



    }

