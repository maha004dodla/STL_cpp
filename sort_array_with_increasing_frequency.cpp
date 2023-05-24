#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>const &a,pair<int,int>const &b)
{
	if(a.first==b.first)
	{
		return a.second>b.second; //increasing order
		//return a.second<b.second  (decreasing order)
	}
	return a.first<b.first;
}
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
	map<int,int>mp;
	for(i=0; i<n; i++)
	{
		mp[arr[i]]++;
	}
	cout<<"map elements"<<endl;
	for(auto i:mp)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	vector<pair<int,int>>b;
	for(auto i:mp)
	{
		b.push_back(make_pair(i.second,i.first));
	}
	cout<<"sorting map elements w.r.t to count"<<endl;
	sort(b.begin(),b.end(),comp);
	for(auto i:b)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<"elements sort with increasing frequnecy"<<endl;
	for(auto i:b)
	{
		int c=i.first;
		for(int k=0; k<c; k++)
		{
			cout<<i.second<<" ";
		}
	}
}