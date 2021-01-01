#include<bits/stdc++.h>
using  namespace std;
int mod(int a);
int main()
{
	int n , k;
	cout<<"enter the vlaue of n and k";
	cin>>n>>k;
	int a[n],b[n];
	int i =1 , j =1;
	
	for(int  l =1;l<=n;l++){
cout<<"Array is genrated";
	a[i]=b[i]=i;
}
	while ( i<=n){
		while (j<=n){
			if(mod((a[i])-b[j]!=k)) j++;
			else 
			i++;
			swap(b[j],b[i]);
		}
	}
	for(int  l =1;l<=n;l++)
	cout<<b[i]<<endl;
}
int mod(int a)
{
	if(a<0) a=-a;
	return a;
}
void swap(int p ,int q )
{
	int temp = p;
	p=q;
	q=temp;
}
