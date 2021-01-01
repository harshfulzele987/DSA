#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z,k,n,
    cin>>z;
    while(z--)
    {
        cin>>n>>k;
        int arr[n];
        temp=0,flag=0;
        for( int i=0;i<n;i++)
            {
                cin>>arr[i];
                if(arr[i]<=0)
                    temp++;

            }
                if(temp>=k)
                    cout<<"No"<<endl;
                else
                    cout <<"Yes"<<endl;
    }
}
