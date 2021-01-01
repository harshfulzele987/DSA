#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,p,rem,flag=0,rev;
    float result;
    cin>>n;
    cin>>m;
    cin>>p;
    for( int i=n;i<=m;i++)
        {
            while(n)
                {
                     rev=0;
                    rem=n%10;
                    rev=rev*10+rem;
                    n=n/10;
                }
                result = (n-rev)/p;
                if(int(result)%1==0)
                    flag++;



                    n++;
            }

 cout <<rev<<endl;
 cout <<result<<endl;
       cout<<flag<<endl;



       return 0;
}
