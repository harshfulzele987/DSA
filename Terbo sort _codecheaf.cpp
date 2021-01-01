#include <iostream>
using namespace std;
int i,j,k;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for (int i =0 ;i<n;i++){
	    cin>>arr[i];
	 for ( int j=1; j<n ; j++){
	     if ( arr[i]>arr[j] ){
	     arr[j]=arr[i];
	     arr[i]=arr[j];
	 }
	}
	}

	for ( int k=0; k<n; k++){
	    cout <<arr[k]<<endl;
	}

}


