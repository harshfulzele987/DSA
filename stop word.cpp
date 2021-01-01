#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    bool temp=true;
    int flag=0;
    string  b[100] ={"is","the" ,"of" ,"for"};
    char str[10000];
    gets(str);
    for( int i=0;i<'\0';i++){
            for( int j=1;j<10;i++){
                if(str[i]==b[j])
                    temp=true;


    }
    }
    if (temp!=false)
        cout<<"stop word";

}
