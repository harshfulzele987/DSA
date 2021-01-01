#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n];
    int temp=0;
    int arr[n];
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
                sort( arr , arr+n);
               cout<<n<<endl;
                for(int i=1;i<n;i++)
                {   if(arr[i]!=arr[i-1])
                cout<<n-i<<endl;
                }

            }


