#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for ( int i=0;i<n;i++)
        cin>>arr[i];
        int temp=-1;
    for ( int i=0;i<n;i++ ,temp++)
    {
        cout <<i;
        if (i<n-2 && arr[i+2]==0)
            i++;
    }
cout<<temp;


}
