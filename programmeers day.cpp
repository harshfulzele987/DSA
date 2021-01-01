#include<bits/stdc++.h>
using namespace std;
int const jan  31;
int const mar 31;
int const april 30;
int const may 31;
int const jun 30;
int const july 31;
int const  aug 31;

int feb,day;
int main()
{
    int year,sum=0;
    cin>>year;
    if ( year<1917)
    {
        if ( year%4==0)
        feb= 29;
        else
            feb= 28;
        sum =sum+jan+feb+mar+april+may+jun+july+aug;
        cout <<sum<<endl;
        day= 256-sum;
        cout <<day <<" ";
        cout <<".09 " <<" " ;
        cout <<year<<" ";
    }
    else
    if ( year>1919)
    {
        if ( year%400==0||year%4==0)
        feb= 29;
        else
            feb= 28;
        sum =sum+jan+feb+mar+april+may+jun+july+aug;
        cout <<sum<<endl;
        day= 256-sum;
        cout <<day<<" ";
        cout <<". 09"<<" ";
        cout <<year<<" ";
    }


}
