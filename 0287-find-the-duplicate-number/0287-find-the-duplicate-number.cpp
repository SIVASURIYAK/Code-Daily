class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto i:nums)
        {
            hash[i]++;
        }
        for(auto i:hash)
        {
            if(i.second>1)
            return i.first;
        }
        return 0;
    }
};