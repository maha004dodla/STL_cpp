#include<bits/stdc++.h>
using namespace std;
void display(stack<int> q)
{
	stack<int>p=q;
	while(!p.empty())
	{
		cout<<p.top()<<" ";/*to print top elements*/
		p.pop();/*to delete elements*/
	}
	cout<<endl;
}
int main()
{
	int n,a,i;
	cin>>n;
	stack<int>q;
	for(i=0; i<n; i++)
	{
		cin>>a;
		q.push(a);
	}
	display(q);
}
/*ip 1 1 2 2 2 3
op 3 2 2 2 1 1*/
