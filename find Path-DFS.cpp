// #include <iostream>
// #include<vector>
// using namespace std;

// vector<int> getPathDFS(int **edges,int V,int s,int e,bool *visited)
// {
//     vector<int> ans;
//     visited[s]=true;
    
//     if(s==e)
//     {
//         ans.push_back(e);
//         return ans;
//     }
    
//     for(int i=0;i<V;i++)
//     {
//         if(edges[s][i]==1 && !visited[i])
//         {
//             getPathDFS(edges,V,i,e,visited);
//             ans.push_back(i);
//         }
//     }
// }

// int main()
// {
//   int V, E, tempX, tempY;
//   cin >> V >> E;

//   /*

//   	   Write Your Code Here
// 	   Complete the Rest of the Program
// 	   You have to Print the output yourself
	 
//   */

//     int** edges=new int*[V];
//     for(int i=0;i<V;i++){
//         edges[i]=new int[V];
//         for(int j=0;j<V;j++){
//             edges[i][j]=0;
//         }
//     }
   
//     for(int i=0;i<E;i++){
//         int a,b;
//         cin>>a>>b;
//         edges[a][b]=1;
//         edges[b][a]=1;
//     }
    
//     cin>>tempX>>tempY;
    
//     bool *visited=new bool[V];
    
//     for(int i=0;i<V;i++)
//     {
//         visited[i]=false;
//     }
    
//    vector<int>ans=getPathDFS(edges,V,tempX,tempY,visited);
    
//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }
   
//   return 0;
// }

#include<vector>
#include <iostream>
using namespace std;
int flag=0;
int printDFS(int** edges,int n, int sv,int ev, bool* visited){
   
    if(sv==ev){
        cout<<ev<<" ";
       flag=1;
        return flag;
    }
   visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
           
            int x=printDFS(edges,n,i,ev,visited);
            if(x==1){
               cout<<sv<<" ";
                return 1;
            }
        }
    }
   
}

void DFS(int** edges,int V,int v1,int v2){
    bool* visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
   
     printDFS(edges, V, v1,v2,visited);
   
    delete [] visited;
   
}


int main() {
    int V, E;
    cin >> V >> E;

  /*

    Write Your Code Here
  Complete the Rest of the Program
  You have to take input and print the output yourself

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
   DFS(edges,V,v1,v2);
   

  return 0;
}


