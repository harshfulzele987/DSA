#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int div=0;
    int sum;
    int z;
    cin>>n;
     cin>>z;
     int m=z;
    for ( int i=0;i<n;i++)
        {

            while (z)
            {
                sum=z%10;
                z=z/10;


            }
            /*if (sum!=0)
                if(m%sum==0)
                div++;
            else
                sum=0;
            */cout <<sum<<endl<<div;
        }
    }
