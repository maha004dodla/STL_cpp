#include<bits/stdc++.h>
using namespace std;
void display(queue<int> p)
{
	queue<int> temp=p;
	while(!temp.empty())
	{
		cout<<temp.front()<<" ";
		temp.pop();
	}
	cout<<endl;
}

int main()
{
	int n,i,a,b;
	cin>>n;
	queue<int>q1;
	queue<int>q2;
	for(i=0; i<n; i++)
	{
		cin>>a;
		q1.push(a);
	}
	for(i=0; i<n; i++)
	{
		cin>>b;
		q2.push(b);
	}
	display(q1);
	display(q2);
}