//Ninja hire

#include<bits/stdc++.h>
using namespace std;
int main(){
    // write your code

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        string s;  
        cin>>s;
        sort(s.begin(),s.end());
        
        int max=0;
        char ans=s[0];

        unordered_map<char, int> mymap;

        for(int i=0;i<s.size();i++)
        {
            mymap[s[i]]=mymap[s[i]]+1;
           // cout<<mymap[s[i]]<<endl;
            if(mymap[s[i]]>max)
            {
                max=mymap[s[i]];
                ans=s[i];
                //cout<<max<<" "<<ans<<endl;
            }
        }

        for(int i=0;i<max;i++)
        {
            cout<<ans;
        }
            cout<<endl;
            //mymap::clear;
        
    }
    
    return 0;
}
