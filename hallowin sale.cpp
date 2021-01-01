/*#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string  arr[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int lb, ub;
    cin>>lb>>ub;
     for( int i=lb;i<10;i++)
    {
        cout<<arr[i]<<endl;
       // int temp=i;
        //cout<<"value of temp is "<<temp<<endl;
        //if(temp % 2==0) cout<<"even"<<endl;
        //else cout<<"odd"<<endl;

      return 0;
    }
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
}
