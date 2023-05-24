#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
	int i;
	for(i=7; i>=0; i--)
	{
		cout<<((n>>i)&1);
	}
	cout<<endl;
}
/* */
int main()
{
	int n,i;
	char c1,c2;
	cin>>n;
	//even or odd
	if(n&1)
	{
		cout<<"Odd"<<endl;
	}
	else
	{
		cout<<"Even"<<endl;
	}
	//binary representation of alphabet
	for(char c='A'; c<='G'; c++)
	{
		cout<<c<<" ";
		binary(c);
	}
	for(char c='a'; c<='g'; c++)
	{
		cout<<c<<" ";
		binary(c);
	}
	//conversion of uppercase to lowercase
	cin>>c1;
	//trick 1
	c1=(c1 | (1<<5));
	//trick 2 
	c1=(c1 | ' ');
	cout<<c1;

	//conversion of lowercase to uppercase
	cin>>c2;
	//trick 1
	c2=(c2 & (~(1<<5)));
	//trick 2
	c2=(c2 & '_');
	cout<<c2;
}

/* even--00000110
  		 00000001
 	  &  00000000
  odd----00000101
   		 00000001
      &  00000001
 		 
 A----01000001
    | 00100000
    ------------
      01100001=a
 
 a---- 01100001
     ~(00100000)

      01100001
   &  11011111
     -----------
      01000001=A  */
