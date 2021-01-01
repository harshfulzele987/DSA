#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,z,m=0;
    cin>>n;
    while(n--)
    {
        int flag=0;
        cin>>z;
        m=z/2;
        for ( int i=2;i<=m;i++)
            {
            if(z%i==0)
            flag=1;
            else flag=0;
            }

    if(flag=1)
        cout <<"NO"<<endl;
    if(flag==0)
        cout <<"YES"<<endl;

    }
}
