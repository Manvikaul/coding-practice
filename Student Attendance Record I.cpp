class Solution {
public:
    bool checkRecord(string s) {
        
        int A_count=0;
        int L_count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                A_count++;
                
                if(A_count>1)
                {
                    return false;
                }
            }
            
            if(s[i]=='L')
            {
                L_count++;
                
                if(L_count>2)
                {
                    return false;
                }
            }
            else
            {
                L_count=0;
            }
        }
        
        return true;
    }
};
