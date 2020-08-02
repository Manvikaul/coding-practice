#include<iostream>
#include<algorithm>
using namespace std;

class Edge
{
    public:
    int source;
    int dest;
    int weight;
};

bool compare(Edge e1, Edge e2)
{
    return e1.weight<e2.weight;
}

int findParent(int V, int *parent)
{
    if(parent[V]==V)
    {
        return V;
    }
    
    return findParent(parent[V], parent);
}

void kruskals(Edge *input,int V, int E)
{
    //Sort input array in asc order based on weights
    sort(input, input+E, compare);
    
    int *parent=new int[V];
    for(int i=0;i<V;i++)
    {
        parent[i]=i;
    }
    
    Edge *output=new Edge[V-1];
    int count=0;
    int i=0;
    
    while(count!=(V-1))
    {
        Edge currentEdge=input[i];
        
        //Check if safe to add currentEdge in MST
        int sourceParent=findParent(currentEdge.source, parent);
        int destParent=findParent(currentEdge.dest, parent);
        
        if(sourceParent!=destParent)
        {
            output[count]=currentEdge;
            count++;
            parent[sourceParent]=destParent;
        }
        i++;
        
    }
    
    for(int i=0;i<(V-1);i++)
        {
            if(output[i].source<output[i].dest)
            {
                cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
            }
            else
            {
                cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
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
    
    Edge *input=new Edge[E];
    
    for(int i=0;i<E;i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    
    kruskals(input,V,E);

  //return 0;
}

