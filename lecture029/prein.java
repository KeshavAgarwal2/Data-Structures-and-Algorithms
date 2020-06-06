import java.util.*;
public class prein
    {
        public static class Node{
        private int data=0;
        private Node left=null;
        private Node right=null;
        Node(int data,Node left,Node right)
        {
            this.data=data;
            this.left=left;
            this.right=right;
        }
        Node(int data){
            this.data=data;
        }
        }
    
   static Node  root=null;

    public  prein(int[] arr)
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
    public static  void display(Node node)
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

    public static Node preIn(int[] pre,int[] in,int ps, int pe,int is,int ie){
        if(ps>pe || is>ie){
            return null;
        }
        Node node=new Node(pre[ps]);
        int idx=is;
        while(idx<=ie){
            if(in[idx]==pre[ps])
            break;
            idx++;
        }
        int tne=idx-is;

        node.left=preIn(pre, in, ps+1,ps+tne,is,idx-1);
        node.right=preIn(pre, in, ps+tne+1,pe,idx+1,ie);

        return node;
}
public static void main(String[] args)
    {
        int[] pre={10,20,40,50,60,30,70,90,80};
        int[] in={40,20,60,50,10,70,90,30,80};
        int[] post={40,60,50,20,90,70,80,30,10};
        //System.out.println(diameter_01(root));
        //diaPair dia=diameter_02(root);
        //System.out.println(dia.dia);
        Node node= preIn(pre,in,0,pre.length-1,0,in.length-1);
        display(node);

        }
    }