#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0;
    int n;
    cin>
    +>n;
    int arr[n];
    for ( int i=0; i<n;i++){
        cin>>arr[i];
    }
    if(n==2){
   if( arr[0]%2!=0 &&  arr[1]%2==0 )
    cout<<"NO";
    }
   else {
            int i=0 ;
            while ( i<n){
                if(arr[i]%2==0){
                    i++;
                }
                if(arr[i]%2!=0){
                    arr[i]++;
                    arr[i+1]++;
                    temp+=2;
                    i++;

                }
            }
            cout<<temp;
   }
}
