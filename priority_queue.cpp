#include<bits/stdc++.h>
using namespace std;
int main()
{
	  int n;
	  cin>>n;
	  vector<int>nums;
	  for(i=0; i<n; i++)
	  {
		cin>>b;
		nums.push_back(b);
	  }
	   vector<int>l;
	    map<int,int>mp;
		int i,n=size(nums);
		for(i=0; i<n; i++)
	    {
	        mp[nums[i]]++;
	    }
	    priority_queue<pair<int,int>>pq;
	    for(auto i:mp)
	    {
	        pq.push(make_pair(i.second,i.first));
	    }
	    for(i=0; i<pq.size(); i++)
	    {
	        pair<int,int> x=pq.top();
	        l.push_back(x.second);
	        pq.pop();
	    }
	    return l;
}
