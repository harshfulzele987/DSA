#include <iostream>
using namespace std;
void fun( int arr[],int  n);
void display( int arr[],int  n);

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for ( int i=0;i<n;i++){
        cin>>arr[i];
	}
	fun ( arr, n);
	display(arr, n);




}


void fun(int arr[] , int n)
{

    	for (int i =0 ;i<n-1;i++){
	  for ( int j=0; j<n-i-1 ; j++){

	     if ( arr[j]>arr[j+1] ){
	         int temp=0;
	         temp = arr[j];
	     arr[j]=arr[j+1];
	     arr[j+1]=temp;
	 }
}
}
}
void display( int arr[] ,int  n)
{
    for ( int i=0; i<n; i++){
	    cout <<arr[i]<<endl;
	}
}

