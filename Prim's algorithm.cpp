#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int findMinVertex(int *weight, bool *visited, int n)
{
    int minVertex=-1;
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && (minVertex==-1 || weight[i]<weight[minVertex]))
        {
            minVertex=i;
        }
    }
    
    return minVertex;
}

void prims(int **edges, int n)
{
    int *parent=new int[n];
    int *weight=new int[n];
    bool *visited=new bool[n];
    
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
        weight[i]=INT_MAX;
    }
    
    parent[0]=-1;
    weight[0]=0;
    
    for(int i=0;i<n;i++)
    {
        int minVertex=findMinVertex(weight,visited,n);
        visited[minVertex]=true;
        
        //explore unvisited neighbours
        for(int j=0;j<n;j++)
        {
            if(edges[minVertex][j]!=0 && !visited[j])
            {
                if(edges[minVertex][j]<weight[j])
                {
                    weight[j]=edges[minVertex][j];
                    parent[j]=minVertex;
                }
            }
        }
    }
    
    //printing the solution
    for(int i=1;i<n;i++)
    {
        if(parent[i]<i)
        {
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }
        else
        {
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
    }
}


int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
    
    int **edges=new int *[V];
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
        int f,s,w;
        cin>>f>>s>>w;
        
        edges[f][s]=w;
        edges[s][f]=w;
    }
    
    prims(edges,V);
    
    for(int i=0;i<V;i++)
    {
        delete[] edges[i];
    }
    
    delete[] edges;

  return 0;
}

