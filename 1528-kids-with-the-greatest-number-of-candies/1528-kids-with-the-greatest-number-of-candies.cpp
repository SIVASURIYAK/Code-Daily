class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=INT_MIN;
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i]>max)
            {
                max=candies[i];
            }
        }
        
        vector<bool>res;
    
        for(int i=0;i<n;i++)
        {
            bool condition=(candies[i]+extraCandies)>=max;
            res.push_back(condition);
        }
        return res;
    }
};