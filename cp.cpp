#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin>>n;


   while(n--)
   {
        int max1=0;
        int flag=0;
       int m;
       cin>>m;
       int arr[m][m]={0};
       for (int i=0; i<m ;i++)
       {         for( int j=0;j<i+1;j++)
                    cin>>arr[i][j];
           }


           for (int i=1; i<m ;i++)
       {         for( int j=0;j<i;j++)
                {
                    flag=arr[i][j];
                    if( arr[i][j+1]>flag){
                        flag=arr[i][j+1];
                    }
                        //cout<<"vl<<flag<<endl;
                }
                   // else
                     //   flag=arr[i][j+1];

                    max1=max1+flag;
                    //cout<<"value of max1 :"<<max1<<endl;
                }
                cout<<endl<<max1;
        }


//

   }

