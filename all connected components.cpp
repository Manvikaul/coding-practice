#include <iostream>
#include <bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

vector<int> printBFS(int **edges,int V,int sv,bool *visited)
{
   
    vector<int> a;
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    
    while(!q.empty())
    {
        int index=q.front();
        a.push_back(index);
        q.pop();
        
        for(int i=0;i<V;i++)
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
    return a;
    
}

void BFS(int **edges, int V)
{
     bool *visited=new bool[V];
     
   // int j=0;
    
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int>a=printBFS(edges,V,i,visited);
            sort(a.begin(), a.end()); 
            
            for(int k=0;k<a.size();k++)
                {
                    cout<<a[k]<<" ";
                }
                cout<<endl;
               // j=a.size();
        }
    }
    
        delete[] visited;
}

int main() {
    int V, E;
    cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to take input and print the output yourself
	 
  */
    
     int**edges=new int*[V];
    for(int i=0;i<V;i++)
    {
        edges[i]=new int[V];
        
        for(int j=0;j<V;j++)
        {
            edges[i][j]=0;
        }  
    }
    
    for(int i=0;i<E;i++)
    {
        int f,s;
        cin>>f>>s;
        
        edges[f][s]=1;
        edges[s][f]=1;
    }
    
     BFS(edges,V);
    
    for(int i=0;i<V;i++)
    {
        delete[] edges[i];
    }
    delete[] edges;

  return 0;
}

