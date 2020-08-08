#include<bits/stdc++.h>  
class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        cout<<s<<endl;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout<<s<<endl;
        
        for(int i=0;i<s.size();i++)
        {
            if(ispunct(s[i]))
            {
                s.erase(i--,1);
            }
        }
        cout<<s<<endl;
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        
        return true;
        
    }
};
