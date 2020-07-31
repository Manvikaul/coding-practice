#include<iostream>
#include<queue>
using namespace std;

void printBFS(int **adj, int v, int sv)
{
	queue<int>pendingVertices;
	bool *visited=new bool[v];
	
	for(int i=0;i<v;i++)
	{
		visited[i]=false;	
	}
	pendingVertices.push(sv);
	visited[sv]=true;
	
	while(!pendingVertices.empty())
	{
		int currentVertex=pendingVertices.front();
		pendingVertices.pop();
		cout<<currentVertex<<endl;
		
		for(int i=0;i<v;i++)
		{
			if(i==currentVertex)
			{
				continue;
			}
			
			if(adj[currentVertex][i]==1 && !visited[i])
			{
				pendingVertices.push(i);
				visited[i]=true;
			}
		}
	}
	
	delete[] visited;
	
}

int main()
{
	int e,v;
	cin>>e>>v;
	
	int **adj=new int *[v];
	
	for(int i=0;i<v;i++)
	{
		adj[i]=new int[v];
		
		for(int j=0;j<v;j++)
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
	
	printBFS(adj,v,0);
}
