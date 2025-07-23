class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        bool v=false;
        bool d=false;
        
        if(n>2)
        {
            for(auto i:word)
            {
                char c=tolower(i);
                if(isalpha(c) || isdigit(c))
                {
                    if(c=='a' || c=='e' || c=='i'||c=='o'||c=='u')
                    {
                        v=true;
                        
                    }
                    else if(!isdigit(c))
                    {
                        d=true;
                        
                    }
                }
                else
                {
                    return 0;
                }
    
            }
        }
        if(v&&d)
        {
            return 1;
        }
        return 0;
    }
};