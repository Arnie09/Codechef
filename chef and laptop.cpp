#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
	{
		int n,x;
		cin>>n;
		int a[102]={0};
		for(int i=0;i<n;i++)
			{
				cin>>x;
				a[x]++;
				
			}
		for(int i=0;i<102;i++)
		{
			if(a[i]==1)
				{
					cout<<i<<endl;
					break;
				}
		}
	
	}
	return 0;
}
