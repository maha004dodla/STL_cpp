#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);//to read input with spaces
        stack<string>st;
        string res="",ans="";
	for(int i=0; i<s.size(); i++)
        {
	    ans=" ";
	    if(s[i]==' ')
	    {    
	    	continue;
            }
            while(s[i]!=' ' and i<s.size())//to insert elements one by one until there exixts space 
            //maha(pop)--the(pop)---great(pop);
            {
            ans+=s[i];//m+a+h+a...
            i++;
            }
            st.push(ans);//maha--the--great
        }
        while(!st.empty())
   	{
           res+=st.top();
           st.pop();
        }
        res.erase(0,1);//to remove space in given range
        cout<<res;
}

/*inp: maha is great
out: great is maha*/
