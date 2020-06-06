import java.util.*;
public class AVL
{
    public static class Node
    {
        Node left=null;
        Node right=null;
        int data=0;
        int height=-1;
        int balance=0;

        Node(int data){
            this.data=data;
        }
    }
    static Node construct(int[] arr,int si,int ei){
        if(si>ei) return null;
        
        int mid=(si+ei)/2;
        Node node=new Node(arr[mid]);

        node.left=construct(arr,si,mid-1);
        node.right=construct(arr,mid+1,ei);

        node.height=getHeight(node);
        node.balance=getBalance(node);
        // getFactors(node);

        return node;
    }
    static void display(Node node)
    {
        if (node==null)
            return;
    
        StringBuilder sb=new StringBuilder();
        sb.append(node.left!=null?node.left.data:".");
        sb.append(" -> "+ node.data+" <- ");
        sb.append(node.right!=null?node.right.data:".");

        System.out.println(sb.toString());

        display(node.left);
        display(node.right);
    }
    static int getBalance(Node node){
        if(node==null)
        return 0;
        int lh=-1;
        int rh=-1;
        if(node.left!=null) lh=node.left.height;
        if(node.right!=null) rh=node.right.height;
        return (lh-rh);
    }
    static int getHeight(Node node){
        if(node==null)
        return -1;
        int lh=-1;
        int rh=-1;
        if(node.left!=null) lh=node.left.height;
        if(node.right!=null) rh=node.right.height;
        return Math.max(lh,rh)+1;
    }
    static void getFactors(Node node)
    {
        node.height=getHeight(node);
        node.balance=getBalance(node);
    }
    static Node rightRotation(Node node){
        Node nnode=node.left;
        Node temp=nnode.right;

        nnode.right=node;
        node.left=temp;

        getFactors(node);
        getFactors(nnode);

        return nnode;
    }

    static Node leftRotation(Node node){
        Node nnode=node.right;
        Node temp=nnode.left;

        nnode.left=node;
        node.right=temp;

        getFactors(node);
        getFactors(nnode);
        return nnode;
    }

    static Node updateFactor(Node node){

        if(getBalance(node)>1){  //ll, lr
            if(getBalance(node.left)>0) //ll
             node=rightRotation(node);
             else{
                node.left=leftRotation(node.left);
                node=rightRotation(node);
            }

        }else if(getBalance(node)<-1){  //rr,rl
            if(getBalance(node.right)<0)//rr
                node=leftRotation(node);
            else{
                node.right=rightRotation(node.right);
                node=leftRotation(node);
            }
        }
        return node;
    }

    static Node addData(Node node,int data){
        if(node==null) return new Node(data);

        if(node.data<data)
            node.right=addData(node.right,data);
        else
            node.left=addData(node.left,data);

        getFactors(node);
        node=updateFactor(node);
        return node;
    }
    static int maximum(Node node){
        Node current=node;
        while(current.right!=null){
            current=current.right;
    
        }
        return current.data;
    }
    static void deleteNode(Node node,int data){
    if(node==nullptr)
    return null;
    if(node.data<data)
    node.right=deleteNode(node.right,data);
    else if(node.data>data)
    node.left=deleteNode(node.left,data);
    else
    {   if(node.left==null || node.right==null)
            {
                Node n=node.left!=null?node.left:node.right;
                delete node;
                return n;

            }

            int max_=maximum(node.left);
            node.data=max_;
            node.left=deleteNode(node.left,max_);
    }
            getFactors(node);
            node=updateFactor(node);
            return node;
    
    }
    
            
    public static void main(String[] args){
    int[] arr={10,20,30,40,50,60,70,80,90,100};
    Node root=construct(arr,0,arr.length-1);
    // display(root);

    root=addData(root,62);
    root=addData(root,63);
    root=addData(root,64);
    root=addData(root,65);
    root=deleteNode(root,65);
    display(root);


    }
}