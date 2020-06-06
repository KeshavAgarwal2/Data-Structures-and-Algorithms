
import java.util.*;
 class BTTree
{
    public class Node
    {
        private int data=0;
        private Node left=null;
        private Node right=null;
        Node(int data,Node left,Node right)
        {
            this.data=data;
            this.left=left;
            this.right=right;
        }
    }
   static   Node root=null;

    public BTTree(int[]arr)
    {
        root=construct(arr);
    }
    static int idx=0;
    public Node construct (int[]arr)
    {
        if (idx>=arr.length || arr[idx]==-1)
        {
            idx++;
            return null;
        }
        Node node=new Node(arr[idx],null,null);
        idx++;
        node.left=construct(arr);
        node.right=construct(arr);

        return node;
    }
    public void display(){
        display(this.root);
    }
    public static void display(Node node)
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

    
public static void triversal(Node node){
LinkedList<Node> que=new LinkedList<>();
que.addLast(root);
while(!que.isEmpty()){
    Node tmp=que.removeFirst();
    System.out.print(tmp.data+" ");
    if(tmp.left!=null){
        que.addLast(tmp.left);
    }
    if(tmp.right!=null){
        que.addLast(tmp.right);
    }
}}
public static void levelorder(Node root){
    LinkedList<Node> que=new LinkedList<>();
    que.addLast(root);
    
    while(!que.isEmpty()){
        int size=que.size();
        
        while(size-->0){ 
            Node proc=que.removeFirst();
            System.out.print(proc.data+" ");

            if (proc.left!=null) que.addLast(proc.left);
            if (proc.left!=null) que.addLast(proc.right);
        }
        System.out.println();
        
    }
}


public static void main(String[]args)
    {
 int[]arr={10,20,40,80,-1,-1,90,-1,-1,50,100,-1,-1,-1,30,60,-1,110,-1,-1,70,120,-1,-1,-1};
    BTTree bt=new BTTree(arr);
    bt.display();
    bt.triversal(root);
    bt.levelorder(root);
    }
}