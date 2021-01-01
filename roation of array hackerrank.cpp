#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,q1,temp=0,j;
    cin>>n>>k>>p;
    int arr[n];
    for ( int i=0;i<n;i++)
    {
        cin>>arr[i];
        for( j=0;j<k;j++)
        {
            temp=arr[n-1];
            arr[n-1]=arr[i+1];
            arr[i+1]=arr[n];
            arr[i]=temp;
        }
        cout<<arr[i]<<endl;
         for( j=0;j<n;j++)
        {
            cin>>q1;
            if(q1==j)
                 cout <<arr[j]<<endl;
        }
    }


}
