#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a;
	cin>>n;
	vector<int>arr;
	for(i=0; i<n; i++)//reading a vector
	{
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	for(auto i=arr.begin(); i!=arr.end(); i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	reverse(arr.begin(),arr.end());
	for(auto j=arr.begin(); j!=arr.end(); j++)
	{
		cout<<*j<<" ";
	}
	cout<<endl;
	int se=30;
	if(find(arr.begin(),arr.end(),se) != arr.end())
	{
		cout<<"element present"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
}
