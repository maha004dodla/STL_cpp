#include<bits/stdc++.h>
using namespace std;
long long int count_factors(long long int n)
{
	long long int c=0;
	for(int i=1; i*i<=n; i++)
	{
		if(n%i==0)
		{
			c++;
			if(n/i!=i)
			{
				c++;
			}
		}
	}
	return c;
}
int main()
{
	long long int n;
	cin>>n;
	cout<<count_factors(n);
}