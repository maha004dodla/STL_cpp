#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a;
	cin>>n;
	vector<int>arr;
	for(i=0; i<n; i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	set<int>s;
	for(i=0; i<n; i++)
	{
		s.insert(arr[i]);
	}
	set<int>::iterator j;
	for(j=s.begin(); j!=s.end(); j++)
	{
		cout<<*j<<" ";
	}
}