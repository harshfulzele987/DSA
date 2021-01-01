#include<bits/stdc++.h>
using namespace std;



int main() {

    long int i=0,j=0,k=0,m=0,x=0,d=0,r=0;
    cin>>i>>j>>k;
    for(m=i;m<=j;m++)
    {
        r=0;
        while(m!=0)
        {
            d=m%10;
            r=r*10+d;
            m=m/10;
        }
        if((abs(r-m)%k)==0)
            x++;
    }
    cout<<x;
    return 0;
}
