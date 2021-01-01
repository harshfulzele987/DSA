#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,z,h,flag=1;
    cin>>n;
    while ( n--)
    {
        cin>>m;
        if(m==0)
            {
                h=1;
                cout<<h;
            }
        if (m==1)
            {
                h=2;
                cout<<h;
            }
        else
             h=1;
            while(m--)
              {

                if(flag=1)
                    {
                        flag=0;
                        z=h*2;
                    }
                else
                    if(flag=0)
                        {
                            z=z+1;
                            flag=1;
                        }





           cout<<z;
         }


    }
}
