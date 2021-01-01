#include<bits/stdc++.h>
using namespace std;
//int fun();
 int main()
 {

     int flag=0;
      int lb ,ub;
     int rem=0;
     cin>>lb>>ub;
     int temp=0;
     for (int i=lb ; i<=ub;i++){
        if (i==1) cout<<1<<endl;

        flag=i;
         temp = i*i;
         cout<<"complier in else part"<<endl<<temp;
        while(temp!=0) {rem =(rem+ (temp%10));}
        if (rem==flag) cout<<flag;


     }

}




