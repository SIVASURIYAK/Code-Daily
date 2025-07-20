class Solution {
public:
    bool rotateString(string s, string goal) {
        int f=0;
        for(int i=0;i<s.size();i++)
        {
        reverse(s.begin(),s.begin()+1);
        reverse(s.begin()+1,s.end());
        reverse(s.begin(),s.end());

        if(s==goal)
        {
            f=1;
            break;
        }
        else
        {
            continue;
        }
        }
        return f;
        
    }
};