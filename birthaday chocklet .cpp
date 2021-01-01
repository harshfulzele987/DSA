#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,s1,d,m;
    cin>>n;
        int s[n];
    for ( int k=0;k<n;k++){
            cin>>s[k];

    }
    cin>>d;
    cin>>m;

    for ( int i=0 ; i<n; i++){

        for ( int j=1;j<n;j++){
            while (m){
                if ( s[i]+s[j]==d)
                    flag++;
                    break;

            }
        }
    }
    cout <<endl<<flag;

}
