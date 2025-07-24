class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int c=0;
        int i=0;
        int j=n-1;
       
        while(j>=0)
        {
            if(c!=0 && s[j]==' ')
            {
                return c;
            }
            else if(s[j]==' ')
            {
                j--;
            }
            else
            {
                c++;
                j--;
            }
        }
         return c;
    }
   
};