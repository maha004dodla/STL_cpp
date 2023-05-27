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
	/*if(find(arr.begin(),arr.end(),se) != arr.end())//implemented by linear search o(n)
	{
		cout<<"element present"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}*/
	//for binary search array must be sorted
	int se=10;
	sort(arr.begin(),arr.end());
	if(binary_search(arr.begin(),arr.end(),se))//o(log2(n))
	{
		cout<<"element found"<<endl;
	}
	else
	{
		cout<<"element not found"<<endl;
	}
}
