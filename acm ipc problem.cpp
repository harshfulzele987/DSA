#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int temp=1;
    int arr[n][m],b[m]={0};
    for ( int i=0; i<n;i++)
        for ( int j=0;j<m;j++)
            cin>>arr[i][j];



              for ( int i=0 ;i<n;i++)
        for ( int j=0;j<m;j++)
            {  if( (arr[i][j] + arr[i+1][j+1])==0) b[j]++;
                if(i<j)
                    i--;
            }

            sort( b, b+m);
              for ( int i=0 ;i<n;i++)
                {
                if(b[i]==b[i+1]) { temp++ ; cout<<temp;  }
                else
                    cout<<b[0];
                }

}
