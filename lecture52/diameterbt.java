import java.util.*;
public class diameterbt{
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
        public static int height(Node node) {
        if (node == null)
            return -1;
        return Math.max(height(node.left), height(node.right)) + 1;
    }
        int diameter_01(Node node){
            if(node==null)
            retrurn 0;
            int ld=diameter_01(node.left);
            int rd=diameter_01(node.right);
            
            int lh=height(node.left);
            int rh=height(node.right);
            return Math.max(Math.max(ld,rd),lh+rh+2);
        }
        int diameter_02(Node node){
            if(node==null)
            retrurn 0;
            int ld=diameter_02(node.left);
            int rd=diameter_01(node.right);
            
            int lh=height(node.left);
            int rh=height(node.right);
            return Math.max(Math.max(ld,rd),lh+rh+2);
        }
        int  diameter_03()
        
}