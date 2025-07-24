class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int i=0;
        int j=s.length()-1;
       
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