// Following is the given TreeNode structure.
/**************

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};
***************/
#include<queue>

void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        
        int childCount=front->children.size();
        
        cout<<front->data<<":";
        
        for(int i=0;i<childCount;i++)
        {
            pendingNodes.push(front->children.at(i));
            
            if(i==childCount-1)
            {
                cout<<front->children.at(i)->data;
            }
            else
            {
                cout<<front->children.at(i)->data<<",";
            }
        }  
        cout<<endl;
    }
     
}


