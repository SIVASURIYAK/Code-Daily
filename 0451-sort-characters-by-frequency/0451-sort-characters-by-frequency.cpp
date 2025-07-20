class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>Smap;
        for(auto a:s)
        {
            Smap[a]++;
        }
        vector<pair<int,char>>vec;
        for(auto b:Smap)
        {
            vec.push_back(make_pair(b.second,b.first));
        }
        sort(vec.begin(),vec.end(),greater<>());
        string v="";
        for(auto c:vec)
        {
            v.append(c.first,c.second);
        }
        return v;
        
    }
};