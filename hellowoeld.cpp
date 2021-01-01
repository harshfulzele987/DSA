#include <iostream>
using namespace std;
int main()
{
  int n, i, m=0, flag=0,z;
  cin>>n;
  while(n--)
  {
        cin>>m;
        z=m/2;
                for(i = 2; i <= z; i++)
                {
                    if(m % i == 0)
                    {
                    cout<<"No"<<endl;
                    flag=1;
                    break;
                    }

                    if (flag==0)
                    cout << "Yes"<<endl;

                }

    }
  return 0;
}
