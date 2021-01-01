#include<bits/stdc++.h>
using namespace std;
int bin_S( int arr[], int r, int l,int  x);
int main(void)
{

    int n,x;
    cin>>n;
    int arr[n];
    for ( int i=0 ;i<n;i++)
    {

        cin>>arr[i];
    }
    cin>>x;
    int result ;
    result =bin_S(  arr, 0,n-1, x);
    cout<<endl<<result;
}
int bin_S( int arr[], int r, int l,int  x)
{

    if (l>=r)
        {
        int mid = l+(r-l)/2;
         if(arr[mid ]==x)
                return mid;
        else
            if(arr[mid]>x)
            return bin_S(  arr, r, l, x);
            else
            return  bin_S(  arr,  r,  l, x);
        }
        return -1;

}
