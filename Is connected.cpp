#include <iostream>
#include<queue>
using namespace std;

bool isConnected(int **edges,int V,int sv,bool *visited)
{
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    
    while(!q.empty())
    {
        int index=q.front();
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
    
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            return false;
        }
    }
    
    return true;
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
    
    bool *visited=new bool[V];
    
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    
     bool ans=isConnected(edges,V,0,visited);
    if(ans==0)
        cout<<"false";
    else
        cout<<"true";
    
    for(int i=0;i<V;i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
    
    delete[] visited;

  return 0;

}

