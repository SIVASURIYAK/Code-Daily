class Solution {
public:
    string makeFancyString(string s) {
        string a="";
        int n=s.length();
        int i=1;
        int c=1;
        while(i<=n)
        {
            
            if(s[i-1]!=s[i])
            {
                c=1;
                a+=s[i-1];
                
                i++;
            }
            else if(s[i-1]==s[i]&& c<2)
            {
                c++;
                a+=s[i-1];
                i++;
                

            }
            else
            {
                i++;
            }
        }
        return a;
    }
};