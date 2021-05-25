#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;

	while(t--){
	    int x,y;
	    cin>>x>>y;

	    int arr1[x];
	    int arr2[y];

	    for(int i=0; i<x; i++){
	        cin>>arr1[i];
	    }
	    for(int i=0; i<y; i++){
	        cin>>arr2[i];
	    }

	    int i=x-1;
	    int j=0;

	    for(;i>=0 && j<y; i--,j++){

	        if(arr1[i]>=arr2[j]){
	            swap(arr1[i],arr2[j]);
	        }
	        else{
	            break;
	        }
	    }

	    sort(arr1,arr1+x);
	    sort(arr2,arr2+y);

	    for(int i=0; i<x; i++){
	        cout<<arr1[i]<<" ";
	    }
	    for(int i=0; i<y; i++){
	        cout<<arr2[i]<<" ";
	    }

	    cout<<"\n";
	}
	return 0;
}
