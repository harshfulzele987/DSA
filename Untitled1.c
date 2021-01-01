//#include<iostream.h>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int temp=0;
    cin>>n;
    int arr[n]={0},b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=1;j<n;j++)
        {
            if(arr[i]+arr[j]%k==0)
            {
                b[i]=arr[i];
                b[j]=arr[j];
                temp++;
            }
        }
    }
    cout<<temp;
}
