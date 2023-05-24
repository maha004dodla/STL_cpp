#include<bits/stdc++.h>
using namespace std;
int main()
{
	//creating pairs
	pair<int,int>p1;
	p1=make_pair(10,20);
	cout<<"P1 first element: "<<p1.first<<endl;
	cout<<"P1 second element: "<<p1.second<<endl;

	//swap() :For two given pairs say p2 and p3 of the same type, the swap function will swap the p2.first with p3.first and p2.second with p3.second.
	pair<string,int>p2;
	pair<string,int>p3;
	p2=make_pair("maha",95);
	p3=make_pair("siri",96);
	cout<<"before swapping objects"<<endl;
	cout<<"======================="<<endl;
	cout<<"P2 first element: "<<p2.first<<endl;
	cout<<"P2 second element: "<<p2.second<<endl;
	cout<<"P3 first element: "<<p3.first<<endl;
	cout<<"P3 second element: "<<p3.second<<endl;
	p2.swap(p3);
	cout<<"after swapping objects"<<endl;
	cout<<"======================"<<endl;
	cout<<"P2 first element: "<<p2.first<<endl;
	cout<<"P2 second element: "<<p2.second<<endl;
	cout<<"P3 first element: "<<p3.first<<endl;
	cout<<"P3 second element: "<<p3.second<<endl;

}