#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s,sw;
        getline();
        getline();
        vector<string>res;
        string st;
        int i,j=0;
        for(i=0; i<s.size(); i++)
        {
            st=' ';
            if(s[i]==' ')
            {
                continue;
            }
            while(i<(s.size())  and s[i]!=' ')
            {
                st+=s[i];
                i++;
            }
            res.push_back(st);
        }
        for(i=0; i<res.size(); i++)
        {
            const char* found = strstr(res[i].c_str(),sw.c_str());
            if(found)
            {
                cout<<(i+1)<<endl;
                break;
            }
        }
        cout<<(-1)<<endl;
}
