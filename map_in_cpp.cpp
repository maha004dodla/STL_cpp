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
	map<int,int>mp;
	for(i=0; i<n; i++)
	{
		mp[arr[i]]++;
	}
	for(i=0; i<n; i++)//map with repetations
	{
		cout<<arr[i]<<" "<<mp[arr[i]]<<" ";
	}
	cout<<endl;
	for(auto i:mp)//map without repetations
	{
		cout<<i.first<<" "<<i.second<<" ";//first-element,second-frequency
	}
}