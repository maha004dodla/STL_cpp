class Solution {
public:
    static bool comp(pair<int,string>&a,pair<int,string>&b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        unordered_map<string,int>mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        vector<pair<int,string>>pq;
        for(auto i:mp)
        {
            pq.push_back(make_pair(i.second,i.first));
        }
        sort(pq.begin(),pq.end(),comp);
        reverse(pq.begin(),pq.end());
        vector<string>s;
        int c=0;
        for(auto i:pq)
        {
            c++;
            if(c>k)
            {
                break;
            }
            s.push_back(i.second);
        }
        return s;
    }
};
