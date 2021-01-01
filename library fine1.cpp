#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(d1<d2 && m1<=m2 &&y1<=y2)
        cout<<"0";
        else
            {
        if(d2<d1)
        {
            if(m2<m1)
            {
                if(y2<y1)
                cout<<"10000";
                else
                cout<<(m1-m2)*500;
            }
            else
           cout<<(d1-d2)*15;

        }
            }
}
