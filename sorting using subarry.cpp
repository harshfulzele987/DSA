#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
        cin>>arr[i];


    int s=0,e=n-1,max1,min1,i;
    for( s=0; s<n-1;s++)
    {
        if(arr[s]>arr[s+1])
            break;
    }
    if(s==n-1)
    {
        cout<<"the array is already sorted";
    }
     for( e=n-1; e>0;e--)
    {
        if(arr[e]<arr[e-1])
            break;
    }
    max1= arr[s];
     min1=arr[s];
    for(  i=s+1 ; i<=e; i++)
    {
        if ( arr[i]>max1)
            max1 = arr[i];
        if (arr[i]<min1)
            min1=arr[i];
    }
    for(  i=0;i<s;i++)
    {

        if(arr[i]>min1)
        {

            s=i;
            break;
        }
    }
    for(  i=n-1;i>=e+1;i--)
    {
        if(arr[i]<max1)
        {
         e=i;
        break;
        }
    }
    cout<<s<<e;
}
