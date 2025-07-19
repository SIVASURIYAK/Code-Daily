class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int n=word1.length()+word2.length();
        cout<<n;
        int k=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && k<word1.length())
            {
                res+=word1[k++];
            }
            else if(i%2!=0 && j<word2.length())
            {
                res+=word2[j++];
            }
        }
        while(k<word1.length())res+=word1[k++];
        while(j<word2.length())res+=word2[j++];

        return res;
    }
};