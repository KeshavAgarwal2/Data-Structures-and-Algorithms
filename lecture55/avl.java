import java.util.*;
public class bst{
    public static class Node{
        int data=0;
        Node left=null;
        Node right=null;
        int height=-1;
        int bal=0;
         public Node(){
        }
        public Node(int data){
            this.data=data;
        }
        Node(int data,Node left,Node right){
            this.data=data;
            this.left=left;
            this.right=right;
        }
    }
    public static int height(Node node) {
        if (node == null)
            return -1;
        return Math.max(height(node.left), height(node.right)) + 1;
    }
       public static Node BSTCreate(int [] arr,int si, int ei){
           if(si>ei)
           return null;
           int mid=(si+ei)>>1;
           Node node =new Node(arr[mid]);
           node.left=BSTCreate(arr,si,mid-1);
           node.right=BSTCreate(arr,mid+1,ei);
           return node;
       }
       public static boolean find_01(Node node,int data){
           if(node==null)
           return false;
           if(node.data==data)
           return true;
           else if(data<node.data)
           return find_01(node.left,data);
           else
           return find_01(node.right,data);
       }
       public static Node addData(Node node,int data){
           if(node==null)
           return 
       }
       public static void display(Node node) {
        if (node == null)
            return;

        System.out.print((node.left != null ? node.left.data : "."));
        System.out.print(" -> " + node.data + " <- ");
        System.out.println((node.right != null ? node.right.data : "."));

        display(node.left); // display(2*idx+1);
        display(node.right); // display(2*idx+2);

    }
    public static class Node ll(Node x){
        Node y=x.left;
        Node yright=y.right;
        y.right=x;
        x.left=y.right;
        return y;
    }
    Node rr(Node x){
        Node y=x.right;
        Node yleft=y.left;
        y.left=x;
        x.right=y.left;
        return y;
    }
    public static BalFactor(Node node){
        int left=node.left.height;
        int right=node.right.height;
        return left-right;
    }
    public static rotation(Node node){
        if(node.bal==2){
            if(node.left.bal==1){
                return ll(node);
            }
        }
    }

    
       public static void main(String[] args){
            int []arr=new int[10];
           for(int i=0;i<10;i++)
           {
               arr[i]=(i+1)*10;
           }
           Node bst=BSTCreate(arr,0,arr.length-1);
           display(bst);
           System.out.println(find_01(bst,80));
       }
    
}