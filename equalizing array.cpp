#include<bits/stdc++.h>
using namespace std;


int fun1(int  arr[] , int n ,int temp =0 )
{
    for( int i=0; i<n;i++)
    {
        if (arr[i]!=arr[i+1])
            {
            arr[i+1]=arr[i+2];
            temp++;
            }

    }
    return temp;
}


int main()
{
//int temp=0;

    int n;
    int temp=-2;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++)
        cin>>arr[i];

        cout<<fun1(arr  , n,  temp);





    /*for ( int i=0;i<n;i++)
    {

    if (arr[i]!=arr[i+1])
        temp++;
    }
    cout <<temp;
*/





}
