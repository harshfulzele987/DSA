#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int>v1;
    for( int i=0; i<5 ; i++){
        cin<<v1(i);
    }
    v1.push_back(200);
    v1.push_back(100);
    for(vector<int >::iterator itr= v1.begin();itr!=v1.end();itr++)
        cout<<*itr;


}

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<string> v1;
v1.push_back("javaTpoint ");
v1.push_back("tutorial");
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)
cout<<*itr;
return 0;
}
*/
