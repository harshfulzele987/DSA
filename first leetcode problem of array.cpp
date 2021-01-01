#include<bits/stdc++.h>
//#include<algorithm.h>
//#include<iostream.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int arr[m],n,temp,flag;
    for (int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cin>>n;
     for (int i=0;i<m;i++)
     {
         if(arr[i]+arr[i+1]==n)
            {
                flag=i;
                temp=i+1;
            }
     }
     cout<<"["<<flag<<"'"<<temp;
}
