class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int> indegree(N+1);
        vector<int> outdegree(N+1);
        
        
        for(int i=0;i<trust.size();i++){
            int x = trust[i][0];
            int y = trust[i][1];
            outdegree[x]++;
            indegree[y]++;
        }
        for(int i=1;i<=N;i++){
            if(indegree[i]==N-1 && outdegree[i]==0)return i;
        }
        return -1;
        
    }
};
