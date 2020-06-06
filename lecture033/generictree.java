import java.util.ArrayList;
import java.util.LinkedList;
public class generictree{
    public static class Node{
        int data=0;
        Node left=null;
        ArrayList<Node>childs=new ArrayList<>();
        Node(int data){
            this.data=data;
        }
    }
    public static Node Constructor(int []arr){
        LinkedList<Node>st=new LinkedList<>();
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]!=-1){
                Node node=new Node(arr[i]);
                st.addFirst(node);
            }
            else{
                Node rchild=st.removeFirst();
                st.getFirst().childs.add(rchild);

            }
        }
        return st.removeFirst();
    }
    public static void display(Node node){
        StringBuilder sb=new StringBuilder();
        sb.append(node.data + " -> [");
        
        for(Node child:node.childs){
            sb.append(child.data + ",");
        }
        
        sb.append("]");
        System.out.println(sb.toString());
       
        for(Node child:node.childs){
            display(child);
        }
    }
    public static int size(Node node){
        int size=0;
        for(Node child: node.childs){
            size+=size(child);
        }
        return size+1;
    }
    public static int height(Node node){
        int ht=-1;
        for(Node child: node.childs){
            int recH=height(child);
            ht=Math.max(recH,ht);
        }
        return ht+1;
    }
    public static boolean find(Node node,int data){
        if(node.data==data) return true;
        boolean res=false;
        for(Node child:node.childs){
            res=res||find(child,data);
        }
        return res;
    }
    public static boolean isFoldable(Node node1,Node node2){
        if(node1==null && node2!=null || node1!=null && node2==null) return false;

        if(node1.childs.size()!=node2.childs.size()) return false;
        
        if(node1.data!=node2.data) return false;

        for(int i=0,j=node1.childs.size();i<node1.childs.size();i++,j--){
            Node child1=node1.childs.get(i);
            Node child2=node2.childs.get(j);
        
        boolean res=isFoldable(child1,child2);
        if(!res) return false;
        }
        return true;
    }
    public static void flattern_01(Node node){
        ArrayList<Node>ch=new ArrayList<>();
        for(Node n:node.childs){
            flattern_01(n);
            ch.add(n);
            for(int i=n.childs.size()-1;i>=0;i--){
                ch.add(n.childs.remove(n.childs.size()-1));
            }
        }
    }
    public static void flattern_02(Node node,ArrayList<Node>child){
        child.add(node);
        for(Node n:node.childs){
            flattern_02(n,child);
        }
        node.childs=new ArrayList<>();
    }
    public static void removeLeaves(Node node){
        for(int i=node.childs.size()-1;i>=0;i--){
            Node child=node.childs.get(i);
            if(child.childs.size()==0){
                node.childs.remove(i);
                continue;
            }
            removeLeaves(child);
        }
    }

    public static void main(String[] args){
        int[] arr={10,20,30,-1,40,-1,-1,50,60,70,-1,80,-1,-1,90,100,-1,110,-1,-1,120,-1,-1,130,-1,-1};
        Node root=Constructor(arr);
        ArrayList<Node>child=new ArrayList<>();
        //flattern_01(root);
        flattern_02(root,child);
        child.remove(0);
        root.childs=child;
       // display(root);
        removeLeaves(root);
        display(root);
    }
}
