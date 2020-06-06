import java.util.*;
public class diameter
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
   static Node  root=null;

    public  diameter(int[] arr)
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
    public  void display(Node node)
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
    public void  preorder(){
        preOrder(this.root);
    }
    public  void preOrder(Node node){
        if (node==null) return;
        System.out.print(node.data+" ");
        preOrder(node.left);
        preOrder(node.right);
}
    public void  inorder(){
        inOrder(this.root);
    }
    public  void inOrder(Node node){
        if (node==null) return;
        inOrder(node.left);
        System.out.print(node.data+" ");
        inOrder(node.right);
    }
    public void  postorder(){
        postOrder(this.root);
    }
    public  void postOrder(Node node){
        if (node==null) return;
        postOrder(node.left);
        postOrder(node.right);
        System.out.print(node.data+" ");
    }
    public boolean find(int data){
        return find(root,data);
    }
    public static boolean find(Node node,int data){
        if (node==null) return false;
        if (node.data==data) return true;
        return find(node.left,data)||find(node.right,data);
    }
    public static int  max(){
        return max(root);
    }
    public static int max(Node node){
        if (node==null)
        return Integer.MIN_VALUE;
        return Math.max(max(node.left),Math.max(node.data,max(node.right)));

    }
    public static int  min(){
        return min(root);
    }
    public static int min(Node node){
        if (node==null)
        return Integer.MAX_VALUE;
        return Math.min(min(node.left),Math.min(node.data,min(node.right)));
    }
    public static boolean roottonodepath(Node root,int data,ArrayList<Node>path)
    {
        if(root==null) 
        return false;
        if (root.data==data)
        {
            path.add(root);
            return true;
        }
        if (roottonodepath(root.left,data,path)){
            path.add(root);
            return true;
        }
        if (roottonodepath(root.right,data,path)){
            path.add(root);
            return true;
        }
        return false;
    }

    public  static ArrayList<Node> roottoNode(Node root , int data){
        if(root==null){ 
        return null;

        }
        if (root.data==data)
        {      ArrayList<Node> al = new ArrayList<>();
            al.add(root);
            return al;
        }
        ArrayList<Node> left =roottoNode(root.left,data);
        if(left!=null){
            left.add(root);
            return left;
        }
        ArrayList<Node> right = roottoNode(root.right, data);
        if(right!=null){
            right.add(root);
            return right;
        }
        return null;
    }
    public static Node LCA_01(Node root,int data1, int data2){
        ArrayList<Node> list1=roottoNode(root,data1);
        ArrayList<Node> list2=roottoNode(root,data2);

        if (list1==null || list2==null)
        return null;
        Node ans=null;
        int i=list1.size()-1;
        int j=list2.size()-1;
        while(i>=0 && j>=0){
            if (list1.get(i).data==list2.get(j).data){
                ans=list1.get(i);
            }else{
                break;
            }
            i--;
            j--;
        }  
        return ans; 
    }
    static Node LCA=null;
    public static boolean LCA_02(Node node, int data1, int data2){
        if (node==null)
        return false;
        boolean selfdone=node.data==data1 || node.data==data2;

        boolean left=LCA_02(node.left,data1,data2);
        if(LCA!=null)
        return true;
        boolean right=LCA_02(node.right,data1,data2);
        if((left && right) || (left && selfdone) || (right && selfdone))
        LCA=node;
        return left || right || selfdone;

    }
    static int prev=Integer.MIN_VALUE;
    public static boolean isBST(Node curr){
        if (curr==null) return true;
        boolean res=false;
        boolean left=isBST(curr.left);
        if(!left) return false;

        if(prev<curr.data) prev=curr.data;
        else return false;
        boolean right=isBST(curr.right);
        if(!right) return false;

        return true;
    }
    public static int diameter_01(Node node){
        if (node==null) return 0;

        int lh=diameter_01(node.left);
        int rh=diameter_01(node.right);
        int ld=diameter_01(node.left);
        int rd=diameter_01(node.right);
        return Math.max(Math.max(ld,rd),lh+rh+1);
  
    }

    public static class diaPair{
        int height=0;
        int dia=0;
    }
    public static diaPair diameter_02(Node node){
        if (node==null) return new diaPair();

        diaPair left=diameter_02(node.left);
        diaPair right=diameter_02(node.right);

        diaPair mypair=new diaPair();
        mypair.height=Math.max(left.height,right.height)+1;
        mypair.dia=Math.max(Math.max(left.dia,right.dia),left.height+right.height+1);
        return mypair; 
    }

    public static void main(String[] args)
    {
        int[] arr={10,20,40,80,-1,-1,90,-1,-1,50,100,-1,-1,-1,30,60,-1,110,-1,-1,70,120,-1,-1,-1};
        diameter bt=new diameter(arr);
        bt.display();
        //.preorder();  System.out.println();
      //  bt.inorder();  System.out.println();
      //  bt.postorder();  System.out.println();
     //   System.out.println(bt.find(100));
      //  System.out.println(bt.max()); 
      //  System.out.println(bt.min());
        ArrayList<Node>ans=new ArrayList<>();
      //  roottonodepath(root,50,ans);
        //  System.out.print(ans);
        // for(Node node:ans){
        //     System.out.print(node.data+" ");
        // }
        System.out.println(bt.LCA_01(bt.root ,80 , 60).data);
        System.out.println(bt.LCA_02(bt.root ,80 , 60));
        System.out.println(diameter_01(root));
        diaPair dia=diameter_02(root);
        System.out.println(dia.dia);
    }
}
