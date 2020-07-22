#include<unordered_map> 

void print(BinaryTreeNode<int>* root,int order,unordered_map<int,vector<int>>&mymap)
{
    if(root==NULL)
    {
        return;
    }
    mymap[order].push_back(root->data);
    print(root->left,order-1,mymap);
    print(root->right,order+1,mymap);

}

	void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	 
		
	// Following is the structure of the Binary Tree node class
	/*
		class BinaryTreeNode {
	    		public :
    				T data;
    			BinaryTreeNode<T> *left;
    			BinaryTreeNode<T> *right;

			BinaryTreeNode(T data) {
	        		this -> data = data;
        			left = NULL;
        			right = NULL;
    			}
		};
	*/
	
	/* Don't write main().
     	* the root of the input binary tree is already passed as function argument.
     	* Taking input is handled automatically.
	* Print the binary tree in vertical order. Don't return anything.
     	*/
        
        unordered_map<int,vector<int>>mymap;
        int order=0;
        
        print(root,order,mymap);	
        
       unordered_map<int,vector<int>>::iterator it=mymap.begin();
        
        while(it!=mymap.end())
        {
            int k=it->second.size();
            
            for(int i=0;i<k;i++)
            {
                cout<<it->second[i]<<" ";
            }
            cout<<endl;
            it++;
        }
           
 	}


