#include<bits/stdc++.h>
using namespace std;
int i,j;
int main(){
    int n,k,flag=0;
    cin>>n;
    cin>>k;
    int arr[n];
    for ( int i=0; i<n;i++){
        cin>>arr[i];
        for ( int j=1; j<n;j++){
                if((arr[0]+arr[1])%k==0)
                    flag++;

        }
    }
    cout <<flag;
 }
