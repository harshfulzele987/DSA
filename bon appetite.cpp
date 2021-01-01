#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,b,temp=0,charge,sum=0;
    cin>>n>>k;
    int bill[n];
    for ( int i=0; i<n;i++){
        cin>>bill[i];
        temp =bill[k];
           bill[k]=0;
      sum=sum+bill[i];

}
cin>>b;
charge = (sum)/2;
if (charge==b )
cout <<" Bon appetit";
else
cout <<b-charge;
    }

