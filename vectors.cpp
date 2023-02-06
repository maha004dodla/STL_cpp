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
	for(i=0; i<n; i++)//output by normal loop
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(auto i=arr.begin(); i!=arr.end(); i++)//output using iterators
	{
		cout<<*i<<" ";
	}
}