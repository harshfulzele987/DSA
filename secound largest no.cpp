#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if((a>b && a<c) || (a<b && a>c)){
            cout<<a<<endl;
        }
        else if((b>a && b<c) || (b>c && b<a))
        cout<<b<<endl;
        else
        cout<<c<<endl;

    }
	// your code goes here
	return 0;
}
