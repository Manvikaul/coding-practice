class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        
        int *color=new int[n];
        for(int i=0;i<n;i++)
        {
            color[i]=-1;
        }
        
        color[0]=0;
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            int curr=i;
            
            for(int j=0;j<graph[i].size();j++)
            {
                if(color[graph[i][j]]==-1)
                {
                    color[graph[i][j]]=1-color[curr];
                }
                else if(color[graph[i][j]]==color[curr])
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};
