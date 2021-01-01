#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int b[2];
    for ( int i=0;i<n;i++){
        cin>>arr[i];
    }
    for( int  i=0;i<n;i++){
        for( int j=i+1;j<=n-1;j++){

                cout<<"value of arr[i] is"<<arr[i]<<" value os arr[j] is :"<<arr[j]<<endl;
            if( arr[i]==arr[j]){
             b[i]=j-i;
             cout<<"value of b[i] is "<<b[i]<<endl;
            }

        }
    }
   // for( int i=0;i<n;i++){
      //  cout<<b[i]<<endl;    }
    sort(b , b + n);
    cout<<b[0];
  //  cout<< *min_element(b , b + n);
}































include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i,k=0,j,c=-1;
    cin >> n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c=i-j;
                if(c < 0)
                    c=-1*c;
                b[k]=c;
                k++;
            }
        }
    }
    int min=b[0];
    if(c == -1)
        min=c;
    else{
     for(i=0;i<k;i++){
      if(b[i] < min)
         min=b[i];
     }
    }
    cout<<min<<endl;

    return 0;
}
