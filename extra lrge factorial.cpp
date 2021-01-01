#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

   /* int n;
    long long int   fact=1;
    cin>>n;
    for( int i=1;i<=n;i++)
    {

        fact=fact*i;
    }
    cout<<fact;



    */

/*int cpy=25;
int a[10000];
int i=0;


    while (cpy != 0) {
    a[i] = cpy % 10;
    cpy = cpy / 10;
    i++;
    }
  cout<<i;
}



*/
int main() {
  int n, a[50] = {0}, i = 0, carry, cpy, len, func, neww;
  scanf("%d", &n);
  if(n==1)
  printf("1");
  else
  {
  cpy = n;
  while (cpy != 0) {
    a[i] = cpy % 10;
    cpy = cpy / 10;
    i++;
  }
  cout<<"value of i "<<i<<endl;
  while (n != 1) {
    for (len = 0; len < i; len++);
    n--;
    cout<<"value of nis:"<<n<<endl<<"value of len :"<<len<<endl;
    i = 0;
    carry = 0;
    for (i = 0; i <= len + 1; i++) {
      func = n * a[i] + carry;
      a[i] = func % 10;
      carry = func / 10;
    cout<<"value of func: "<<func<<endl<<"value of carry:" <<carry<<endl<<"value of array_ of i"<< i<<"is"<<a[i]<<endl;
    }

  }
  for (i = len; i >= 0; i--)
    if (a[i] != 0) {
      neww = i;
      break;
    }
  for (i = neww; i >= 0; i--)
    printf("%d", a[i]);
  }
}


