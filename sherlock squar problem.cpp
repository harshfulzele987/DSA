#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count=0;
 int a,b;
 int n;

 while(n--)
 {
        cin>>a>>b;
      double c;
      for(int i=a;i<=b;i++)
      {
          c=sqrt(i);
          cout<<c;
          if(int(c)2%1==0)
              {
                count++;
                i+=c*2;
              }
              cout <<i;
      }
    return count;


    }
}
