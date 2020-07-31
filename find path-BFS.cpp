#include<queue>
#include<unordered_map>
#include <iostream>
using namespace std;



void printBFS(int** edges,int n, int sv,int ev, bool* visited){
   unordered_map<int,int> ourmap;
    if(sv==ev){
        cout<<ev;
    }
    int flag=0;
    queue<int> pendingVertices;
    pendingVertices.push(sv);
    visited[sv]=true;
    while(!pendingVertices.empty()){
        int currentVertex=pendingVertices.front();
        pendingVertices.pop();
        // cout<<currentVertex<<" ";
     
             for(int i=0;i<n;i++){
            if(i==currentVertex){
                continue;
            }
         
            if(edges[currentVertex][i]==1 && !visited[i]){
                ourmap[i]=currentVertex;
                pendingVertices.push(i);
                visited[i]=true;
                if(i==ev){
                flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            break;
        }
       
    }
 
    if(flag==1){
         cout<<ev<<" ";
        int x=ev;
        while(x!=sv)
        {
           cout<<ourmap[x]<<" ";
       
            x=ourmap[x];
        }
    }else{
        return;
    }


}

void BFS(int** edges,int V,int v1,int v2){
    bool* visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
       

//     for(int i=0;i<V;i++){
//         if(!visited[i]){
//           printBFS(edges, V, i,visited);  
//         }
       
//     }
     printBFS(edges, V, v1,v2,visited);
   
    delete [] visited;
   
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
      int** edges=new int*[V];
    for(int i=0;i<V;i++){
        edges[i]=new int[V];
        for(int j=0;j<V;j++){
            edges[i][j]=0;
        }
    }
   
    for(int i=0;i<E;i++){
        int a,b;
        cin>>a>>b;
        edges[a][b]=1;
        edges[b][a]=1;
    }
    int v1,v2;
    cin>>v1>>v2;
   BFS(edges,V,v1,v2);
   

  return 0;
}




