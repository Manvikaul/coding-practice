class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int flag=1;
        
        if(strs.size()==0)
        {
            return ans;
        }
        
        for(int i=0;i<strs[0].size();i++)
        {
            char curr=strs[0][i];
            
            for(int j=1;j<strs.size();j++)
            {
                //cout<<strs[j][i]<<" "<<curr<<endl;
                if(strs[j][i]!=curr)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
            
            ans.push_back(curr);
            //cout<<curr;
        }
        
        return ans;
        
    }
};
