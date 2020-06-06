#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data=0;
    Node *left=NULL;
    Node *right=NULL;

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
int maximum(Node* node){
    Node* curr=node;
    while (curr->right!=NULL){
        curr=curr->right;
    }
    return curr->data;
}
int minimum(Node* node){
    Node* curr=node;
    while (curr->left!=NULL){
        curr=curr->left;
    }
    return curr->data;
}
int height(Node* node){
    return (node==NULL)?0:max(height(node->left),height(node->right))+1;
}
int size(Node* node){
    return (node==NULL)?0:size(node->left)+size(node->right)+1;
}




void solve()
{
    vector<int>arr={10,20,30,40,50,60,70,80,90,100,110,120};
    Node *root=create(arr,0,arr.size()-1);
    display(root);
    cout<<maximum(root)<<endl;
    cout<<minimum(root)<<endl;
    cout<<height(root)<<endl;
    cout<<size(root)<<endl;
}
int main()
{
    solve();
    return 0;
}
