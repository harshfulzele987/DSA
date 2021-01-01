#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
        {
        int m, flag=0;
    cin>>m;
    while(m){
        if ( m%10==4)
            flag  ++;
        m=m/10;
    }
    cout<<flag;
        }
}
