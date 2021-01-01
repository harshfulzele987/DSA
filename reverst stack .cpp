#include<bits/stdc++.h>
using namespace std;




stack<int >sp;
void revers(stack<int  st;)
{
    int item=0;
    while ( !st.empty())
    {

        item=st.top();
        st.pop();
        sp.top= item;
    }
}
void diaplay()
{
    while(sp.empty())
    {
        int n;
        n=st.top();
        st.pop;
        cout<<n;
    }
}

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    revers(st);
    display();
}
