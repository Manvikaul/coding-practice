//leetcode

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int **adj=new int* [numCourses];
        
        for(int i=0;i<numCourses;i++)
        {
            adj[i]=new int[numCourses];
            
            for(int j=0;j<numCourses;j++)
            {
                adj[i][j]=0;
            }
        }
        
        int *indegree=new int[numCourses];
        
        for(int i=0;i<numCourses;i++)
        {
            indegree[i]=0;
        }
        
        for(int i=0;i<prerequisites.size();i++)
        {
            int f=prerequisites[i][0];
            int s=prerequisites[i][1];
            
            adj[f][s]=1;
            
            indegree[s]++;
        }
        
        queue<int>q;
        int n=numCourses;
        
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
                n--;
            }
        }
        
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            
            for(int i=0;i<numCourses;i++)
            {
                if(adj[curr][i]==1)
                {
                    indegree[i]--;
                    
                    if(indegree[i]==0)
                    {
                        q.push(i);
                        n--;
                    }
                }
            }
            
        }
        return n==0;
    }
};
