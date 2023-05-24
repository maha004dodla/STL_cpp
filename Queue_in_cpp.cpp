#include<bits/stdc++.h>
using namespace std;
void display(queue<int> p)
{
	cout<<"dequeing elements"<<endl;
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
	cout <<"The size of the queue is : "<<q.size()<<endl; //size() function 
	cout<<"The first element that entered the queue is : "<<q.front()<<endl;  //front() function
	cout<<"The last element that entered the queue is : "<<q.back()<<endl;    //back() function
	display(q1);
	display(q2);
}
