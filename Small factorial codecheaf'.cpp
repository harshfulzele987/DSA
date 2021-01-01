 #include<iostream>

using namespace std;

int main()
{
	int q, j, k, t, n, a, tmp, len, ans[100000],x,i;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ans[100000]={0};
		ans[0] = 1;
		len = 1;
		tmp = 0;
		q=2;
		x=0;
		for(q=2;q<=n;q++)
	//while(q<=n)
		{
		    //x=0;
		    //tmp=0;
		    for(x=0;x<len;x++)
		    //while(x<len)
			{
				ans[x] = ans[x] * q ;
				ans[x]+=tmp;
				tmp = ans[x]/10;
				ans[x] = ans[x]%10;
			}
			while(tmp!=0)
			{
				ans[len]=tmp%10;
				tmp /= 10;
				len++;
			}
			//len=x;
		}
		for(i=len-1; i>=0; i--)
		{
		    cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
