#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,p;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	p=1<<n;
	//cout<<p;
	for(i=0; i<p; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i&(1<<j))
			{
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}