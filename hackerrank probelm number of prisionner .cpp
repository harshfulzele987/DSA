#include<bits/stdc++.h>
using namespace std;


int function1()
{
    int n,p,s,cs,flag,temp=0;
    cin>>n;
    cin>>p>>s>>cs;
    for ( int i=cs; i<=s;i++)
    {
        temp++;
        if ( i=p)
            i=1;
        if(temp==s)
            {
                flag=i;
                break;
            }
    }
    return flag;
}
int main()
{
    int s= function1();
    cout<<s;
}
