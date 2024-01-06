#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=1e6+1;
ll primes[1000001];//1e6+1
void create_seive()
{
	for(int i=0; i<N; i++)
	{
		primes[i]=i;
	}
	primes[0]=primes[1]=0;
	for(int i=2; i*i<=N; i++)//loop for first multiple
	{
		if(primes[i]==i)
		{
			for(int j=i*i; j<N; j+=i)//loop for next multiple nd incrementing by first multiple times
			{
				if(primes[j]==j)
				{
					primes[j]=i;
				}
			}
		}
	}
}
int main()
{
	create_seive();
	ll n;
	cin>>n;
	vector<int>res;
	while(n!=1)
	{
		res.push_back(primes[n]);
		n=n/primes[n];
	}
	for(auto i:res)
	{
		cout<<i<<" ";
	}
}