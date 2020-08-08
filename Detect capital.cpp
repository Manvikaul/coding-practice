class Solution {
public:
    bool detectCapitalUse(string word) {
        
        string ans="";
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                ans.push_back('c');
            }
            else
            {
                ans.push_back('s');
            }
        }
        

        
        if(ans[0]=='s')
        {
            for(int i=1;i<ans.size();i++)
            {
                if(ans[i]=='c')
                {
                    return false;
                }
            }
        }
        else if(ans[0]=='c' && ans[1]=='c')
        {
            for(int i=2;i<ans.size();i++)
            {
                if(ans[i]=='s')
                {
                    return false;
                }
            }
        }
        else if(ans[0]=='c' && ans [1]=='s')
        {
            for(int i=2;i<ans.size();i++)
            {
                if(ans[i]=='c')
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};
