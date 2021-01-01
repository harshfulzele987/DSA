#include<bits/stdc++.h>
using namespace std;

void fun( stack<int>s)
{

    while(!s.empty())
    {
        cout<<"\t"<<s.top();
        s.pop();

    }
    cout<<"\n";
}



int main()
{
    stack<int >s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    fun(s);


}
