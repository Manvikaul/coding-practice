#include<iostream>
using namespace std;

void printDFS(int **adj, int n, int sv, int *visited)
{
	visited[sv]=1;
	cout<<sv<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(i==sv)
		{
			continue;
		}
		
		if(adj[sv][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			
			printDFS(adj,n,i,visited);
		}
	}
}

int main()
{
	int e,n;
	cin>>n>>e;
	
	int **adj=new int *[n];
	
	for(int i=0;i<n;i++)
	{
		adj[i]=new int[n];
		
		for(int j=0;j<n;j++)
		{
			adj[i][j]=0;
		}
	}
	
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		
		adj[f][s]=1;
		adj[s][f]=1;
	}
	
	int *visited=new int[n];
	
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
	}
	
	printDFS(adj,n,0,visited);
	
	delete[] visited;
	
	for(int i=0;i<n;i++)
	{
		delete[] adj[i];
	}
	delete[] adj;
}
