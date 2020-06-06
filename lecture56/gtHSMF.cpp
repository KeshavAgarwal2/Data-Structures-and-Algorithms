#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node
{
public:
    int data;
    vector<Node *>childs;
    Node()
    {

    }
    Node(int data)
    {
        this->data=data;
    }
};
Node *createTree(vector<int>&arr){
    stack<Node *>st;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=-1)
        {
            Node *node=new Node(arr[i]);
            st.push(node);
        }
        else
        {
            Node *node=st.top();
            st.pop();
            st.top()->childs.push_back(node);
        }
    } return st.top();
}
void display(Node*node)
{
    cout<<node->data<<" ";
    for(Node* child: node->childs)
    {
        cout<<child->data<<" , ";
    }
    cout<<endl;
    for(Node* child:node->childs)
    {
        display(child);
    }
}
int size(Node *node){
    int sz=0;
    for(Node *child: node->childs)
    {
        sz+=size(child);
    }
    return sz+1;
}
int height(Node *node){
    int h=-1;
    for(Node *child: node->childs)
    {
        h=max(h,height(child));
    }
    return h+1;
}
int maximum(Node *node){
    int sz=0;
    for(Node *child: node->childs)
    {
        sz+=size(child);
    }
    return sz+1;
}
int size(Node *node){
    int sz=0;
    for(Node *child: node->childs)
    {
        sz+=size(child);
    }
    return sz+1;
}
void solve(){
    vector<int>arr{10,20,50,-1,-1,30,70,-1,80,100,110,-1,-1,40,-1,-1};
    Node *node=createTree(arr);
    display(node);
}