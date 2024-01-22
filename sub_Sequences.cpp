#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,m,n;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	m=pow(2,n);
	for(i=0; i<m; i++)
	{
		vector<int>sub_seq;
		for(j=0; j<n; j++)
		{
			if(i&(1<<j))
			{
				sub_seq.push_back(arr[j]);
			}
		}
		for(k=0; k<sub_seq.size(); k++)
		{
			cout<<sub_seq[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}