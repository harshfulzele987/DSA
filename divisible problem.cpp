//#include<iostream.h>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,flag=0;
    int temp=0;
    cin>>n>>k;
    int arr[n],b[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        {
        for(int j=1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                b[i]=arr[i];
                b[j]=arr[j];
                temp++;

            }
            cout<<b[i]<<endl;
        }
    }
    cout<<temp<<endl<<flag;
}
