class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();//TEST
        int t=n*(n+1)/2;
        int s=0;//TESTS
        
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
      
        return t-s;
        
        
        
    
    }
};