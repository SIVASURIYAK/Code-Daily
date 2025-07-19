class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        stack<string>st;
        int n=s.size();
        string str="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(!str.empty())
                st.push(str);
                str="";
            }
            else
            {
                str+=s[i];
            }
        }
        string ans;\
        while(st.size()!=1)
        {
            ans+=st.top()+" ";
            st.pop();
        }
        ans+=st.top();
        return ans;
        
    }
};