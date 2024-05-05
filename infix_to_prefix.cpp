#include<bits/stdc++.h>
using namespace std;
int precedence(char c) 
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '/' || c == '*')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='(')
		{
			s[i]=')';
		}
		else if(s[i]==')')
		{
			s[i]='(';
		}
	}
	s='('+s+')';
	stack<char>st;
	string res="";
	for(auto i:s)
	{
		if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9'))
		{
            res+=i;
		}
		else if(i=='(')
		{
			st.push(i);
		}
		else if(i==')')
		{
			while(st.top()!='(')
			{
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else
		{
			while(precedence(i) < precedence(st.top()))
			{
		        res += st.top();
		        st.pop();
		    }
			st.push(i);			
		}
	}
	while(!st.empty()) 
	{
        res += st.top();
        st.pop();
    }
	cout<<res<<endl;
}