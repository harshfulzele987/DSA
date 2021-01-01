#include<bits/stdc++.h>
using namespace std;
int flag=0;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    //logic//

    for ( int i=0;i<n;i++){
        cin>>arr[i];
        for ( int j=i+1;j<n;j++){
                if( arr[i]==arr[j])
                flag=arr[i];

        }
    }
    cout <<flag;
}
