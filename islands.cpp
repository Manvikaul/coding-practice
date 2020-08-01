#include <iostream>
#include <bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

void islands(int **edges,int V,int sv,bool *visited)
{
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    
    while(!q.empty())
    {
        int index=q.front();
        q.pop();
        
        for(int i=1;i<=V;i++)
        {
            if(i==index)
            {
                continue;
            }
            if(edges[index][i]==1 && !visited[i])
            {
                
                q.push(i);
                visited[i]=true;
            }
        }
    }
    //return;
    
}

int BFS(int **edges, int n)
{
     int count=0;
     bool *visited=new bool[n+1];
    
    for(int i=1;i<=n;i++)
    {
        visited[i]=false;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
            count=count+1;
            islands(edges,n,i,visited); 
        }
        
    }
    
    //cout<<count;
    
    delete[] visited;
    return count;
}


int solve(int n,int m,vector<int>u,vector<int>v)
{
	// Write your code here .
    int**edges=new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        edges[i]=new int[n+1];
        
        for(int j=1;j<=n;j++)
        {
            edges[i][j]=0;
        }  
    }
    
     for(int i=0;i<m;i++)
    {
        int j=u[i];
        int k=v[i];
        edges[j][k]=1;
        edges[k][j]=1;
    }
    
    int count=BFS(edges,n);
    
    for(int i=1;i<=n;i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
    
    return count;
    
}
