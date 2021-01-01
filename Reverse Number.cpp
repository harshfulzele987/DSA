#include<bits/stdc++.h>
using namespace std;
int main()
{
    	// your code goes here
	int n;
	cin<<n;
	while ( n--){
	    int m,rev,rem;
	    cin>>m;
	    while (m){
	    rem= m%10;
	    rev= rev*10+rem;
	    m=m/10;
	    }

	cout <<rev;
	}

	return 0;
}


