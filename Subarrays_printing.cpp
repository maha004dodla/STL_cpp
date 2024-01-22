#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a,j;
	cin>>n;
	vector<int>arr;
	vector<vector<int>>subarray;
	for(i=0; i<n; i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			vector<int>l(arr.begin()+i,arr.begin()+j+1);
			subarray.push_back(l);
		}
	}
	for(auto i:subarray)
	{
		for(auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}