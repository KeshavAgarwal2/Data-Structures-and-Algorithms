#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data=0;
    Node *left=NULL;
    Node *right=NULL;
    int freq=1;

    Node(int data){
        this->data=data;
    } 
    Node(int data,Node *left,Node *right){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};

Node *create(vector<int> &arr,int si,int ei){
    if(si>ei)
        return nullptr;
    int mid=(si+ei)>>1;
    Node *node=new Node(arr[mid]);
    node->left=create(arr,si,mid-1);
    node->right=create(arr,mid+1,ei);
    return node;
}
int maximum(Node *node)
{
    Node *curr = node;
    while (curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr->data;
}
void display(Node *node)
    {
        if (node==nullptr)
            return;
    
        string str="";
        str+=(node->left!=nullptr?to_string(node->left->data):".");
        str+=(" -> "+ to_string(node->data)+" <- ");
        str+=(node->right!=nullptr?to_string(node->right->data):".");

        cout<<str<<endl;

        display(node->left);
        display(node->right);
    }
void addNode_01(Node* node,Node* par,int data,bool isleft){
    if (node==NULL){
        Node* child=new Node(data); 
        if(isleft)
            par->left=child;
        else
            par->right=child;
            return ;
    }
    if(node->data==data)
    {
        node->freq++;
        return;
    }
    else if(node->data<data)
        addNode_01(node->right,node,data,false);
        else
        {
            addNode_01(node->left,node,data,true);
        }
    }
Node* addNode_02(Node* &node,int data){
    if(node==NULL)
        return new Node(data);
    if(node->data<data)
    node->right=addNode_02(node->right,data);
    else
    node->left=addNode_02(node->left,data);
    return node;
}
void addNode_03(Node** node,int data)
{
    if((* node)==NULL){
        (* node)=new Node(data);
        return;
    }
    if ((*node)->data==data)
    {
        (*node)->freq++;
        return;
    }
    else if((*node)->data<data)
        addNode_03(&((*node)->right),data);
    else
    {
        addNode_03(&((*node)->left),data);
    }  
}
Node* deleteNode(Node* node,int data){
    if(node==nullptr)
    return node;
    if(node->data<data)
    node->right=deleteNode(node->right,data);
    else if(node->data>data)
    node->left=deleteNode(node->left,data);
    else
    {
        if(node->freq>1)
        {
            node->freq--;
        }
        else
        {
            if(node->left==NULL || node->right==NULL)
            {
                Node* n=node->left!=NULL?node->left:node->right;
                delete node;
                return n;
            }
            
            int max_=maximum(node->left);
            node->data=max_;
            node->left=deleteNode(node->left,max_);
            
        }
        return node;
    }
    
}
void solve()
{
    vector<int>arr={2,10,19,25,26,27,29,30,45,50,60,63,72,75,85};
    Node *root=create(arr,0,arr.size()-1);
    addNode_01(root,NULL,55,true);
    addNode_02(root,43);
    addNode_03(&root,33);
    display(root);
    
}
int main()
{
    solve();
    return 0;
}

