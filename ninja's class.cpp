//ninja hire

#include<bits/stdc++.h>
using namespace std;
int main(){
    // write your code
    int t;
    cin>>t;
    vector<long long int> ans;
    
    for(int i=0;i<t;i++)
    {
        ans.clear();
        int n;
        cin>>n;
        vector<int> m;
        for(int i=0;i<n;i++){
            int money;
            cin>>money;
            m.push_back(money);
        }
        vector<int> res;
       
        for(int i=0;i<n;i++){
            int num=i+1;
            for (int j=1; j<=sqrt(num); j++)
    {
        if ((num)%j == 0)
        {
            if ((num)/j == j)
                res.push_back(j);
 
            else
            { 
                res.push_back(j);
           	    res.push_back((num)/j);
            }
        }
    }
            long long int sum=0;
            for(int k=0; k<res.size();k++){
                sum+= (long long int)m[res[k]-1];
               
            }
            ans.push_back(sum);
            res.clear();
           
        }
        for(int s=0;s<ans.size();s++){
            cout<<ans[s]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
