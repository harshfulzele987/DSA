#include<bits/stdc++.h>
using namespace std;

int main() {
     long int total,sweet,start,cases,warn;
    cin>>cases;
    while(cases--){
    cin>>total>>sweet>>start;

        warn=(sweet+start-2)%total+1;
        int s=sweet+start-2;
        cout<<s<<endl;
        cout<<s%total;
        cout<<s%total+1;
    cout<<warn<<endl;
    }
    return 0;
}
