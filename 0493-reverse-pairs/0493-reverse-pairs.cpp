class Solution {
public:
void merge(vector<int>&nums,int l,int m,int h)
{
    int left=l;
    int right=m+1;
    vector<int>temp;
    while(left<=m && right <=h)
    {
        if(nums[left]<=nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }

    }
    while(left<=m)
    {
    temp.push_back(nums[left]);
     left++;
    }
    while(right<=h)
    {temp.push_back(nums[right]);
    right++;
    }
    for(int i=l;i<=h;i++)
    {
        nums[i]=temp[i-l];
    }

}
int countpairs(vector<int>&arr,int l,int m,int h)
{
    int c=0;
    int right=m+1;
    for(int i=l;i<=m;i++)
    {
        while(right<=h && arr[i]>2LL*arr[right])
        {
            right++;
           
        }
         c+=(right-(m+1));
    }
    return c;
}

    int mergesort(vector<int>&nums,int l,int h)
    {
        int c=0;
        if(l>=h)return c;
    int m=(l+h)/2;
    c+= mergesort(nums,l,m);
    c+= mergesort(nums,m+1,h);
    c+=countpairs(nums,l,m,h);
    merge(nums,l,m,h);
    return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        
        return mergesort(nums,0,n-1); 
        
    }
};