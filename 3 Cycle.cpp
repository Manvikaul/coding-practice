int solve(int n,int m,vector<int>u,vector<int>v)
{
	// Write your code here .
    int count=0;
    
    int **adj=new int*[n+1];
    
    for(int i=1;i<=n;i++)
    {
        adj[i]=new int[n+1];
        
        for(int j=1;j<=n;j++)
        {
            adj[i][j]=0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        int f=u[i];
        int s=v[i];
        adj[f][s]=1;
        adj[s][f]=1;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n && i!=j;j++)
        {
            //cout<<"one";
            if(adj[i][j]==1)
            {
                for(int k=1;k<=n && k!=j;k++)
                {
                    //cout<<"two";
                    if(adj[j][k]==1)
                    {
                        //cout<<"three";
                        if(adj[k][i]==1 && i!=k)
                        {
                            //cout<<"four";
                            count++;
                        }
                    }
                }
            }
        }
    }
    //cout<<count;
    return (count);
}
