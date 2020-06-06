import java.util.*;
public class binarytree{
    public static class Node{
        int data=0;
        Node left=null;
        Node right=null;
        Node(int data){
            this.data=data;
        }
        Node(int data,Node left,Node right){
            this.data=data;
            this.left=left;
            this.right=right;
        }
        public String toString() {

            String str = "";
            str += ((left != null ? left.data : "."));
            str += (" -> " + data + " <- ");
            str += ((right != null ? right.data : "."));
            str += "\n";

            if (left != null)

                str += left.toString();
            if (right != null)
                str += right.toString();
            return str;
        }
    }
    static int idx=0;
    public static Node createTree(int []arr){
        if(idx==arr.length || arr[idx]==-1){
            idx++;
            return null;
        }
            Node node=new Node(arr[idx]);
            idx++;
            node.left=createTree(arr);
            node.right=createTree(arr);
            return node;
    }
    public static void display(Node node){
            if(node==null)
            return;
            System.out.print((node.left!=null?node.left.data  + "  ":" . "));
            System.out.print(" -> "+node.data +" <- ");
            System.out.println((node.right!=null?node.right.data + "  ":" . "));
            display(node.left);
            display(node.right);
    }
    public static int maximumInTree(Node node) {
        if (node == null)
            return (int) -1e8;

        int lmax = maximumInTree(node.left);
        int rmax = maximumInTree(node.right);
        int oMax = Math.max(lmax, rmax);

        return Math.max(node.data, oMax);
    }

    public static boolean find(Node node, int data) {
        if (node == null)
            return false;

        if (node.data == data)
            return true;
        boolean res = false;
        res = res || find(node.left, data);
        res = res || find(node.right, data);
        return res;

    }
    public static int size(Node node) {
        if (nod == null)
            return 0;
        return size(node.left) + size(node.right) + 1;

    }

    public static int height(Node node) {
        if (node == null)
            return -1;
        return Math.max(height(node.left), height(node.right)) + 1;
    }
    public static  ArrayList<Node> roottonodepath(Node node,int data){
        if(node==null)
        return new ArrayList(0);
        if(node.data==data){
            ArrayList<Node> arr=new ArrayList<Node>(0);
            arr.add(node);
            return arr;
        }
    ArrayList<Node> arr=new ArrayList<Node>();
    if() 
    }
    public static int LCA_01(Node node,int data1,int data2){
        ArrayList<Node>list1=roottonodepath(node,data1);
        ArrayList<Node>list2=roottonodepath(node,data2);
        int ans=-1;
        int i=list1.size()-1;
        int j=list2.size()-1;
        while(i>=0 && j>=0){
            if(list1.get(i)!=list2.get(j))
            break;
        ans=list1.get(i).data;
        i--;
        j--;
    }
    return ans;
    }
public static void solve(){
    int[]arr={10,20,30,40,-1,-1,50,-1,-1,60,-1,70,-1,-1,80,90,100,120,-1,-1,130,-1,-1,110,-1,-1,140,-1,-1};
    Node root=createTree(arr);
    System.out.println(root);
    //display (root);
}
    public static void main(String[] args){
        solve();
    }
}

