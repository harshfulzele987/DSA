#include<bits/stdc++.h>
using namespace std;
int main()
{

    int long long n,i,j;
   int long  long a,b;
    cin>>n;
    while (n--)
    {
        int long long  c=0;
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            for(i=1;i<=b;i++)
            {
                if(i*i==j)
                {
                    c++;
                    i=i+i*2;
                }

            }
        }
        cout<<c<<endl;

    }
}
