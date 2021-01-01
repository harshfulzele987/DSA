#include<bits/stdc++.h>
using namespace std;






int main()
{
 int arr[ ]= { 1,2,3,4,5,6,7} ;
  int n=7;



    int d;
    cin>>d;
    for ( int  i=0 ;i<d; i++)
        {
             int temp;
             temp= arr[d];
            for ( int j=0;j<n;j++)
            {
                arr[i]=arr[i+1];
            }
            arr[n-d+1]=temp;

        }
        for ( int k=0; k<n ;k++){
             cout<<arr[k];
        }
    }
