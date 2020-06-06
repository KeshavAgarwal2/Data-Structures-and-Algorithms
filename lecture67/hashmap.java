import java.uti.LinkedList;
public class HashMap
{
    public class Node
    {
        int key=key;
        int value=value;
        public Node(int key,int value)
        {   
            this.key=key;
            this.value=value;
        }
        @Override
        public StringtoString(){
            return this.key+"=" + this.value;
        }
    }
    private int size=0;
    private LinkedList<Node>[] buckets=new LinkedList[10];
    public HashMap(){
        reAssign();
    }
    public void reAssign(){
        for(int i=0;i<buckets.length;i++)
        buckets[i]=new LinkedList<>();
    }
    @Override
    public String toString(){
        StringBuilder sb=new StringBuilder();
        sb.append("{}");
        return sb.toString();
    }
    public void put(Integer key,Integer value){
        int code=myGroup(key);
        LinkedList<Node>group=buckets[code];
        Node rn=foundInGroup(group,key);
        if(rn!=null)
        {
            rn.value=value;
        }
        else
        {
            Node node=new Node(key,value);
            group.addLast(node);
            this.size++;
            
            double lambda=group.size()*1.0/buckets.length;
            if(lambda>=0.3)
            {
                rehash();
            }       
        }
    }
    private Node get(Integer key){
        int code=myGroup(key);
        LinkedList<Node>group=buckets[code];
        Node node=foundInGroup(group,key);
        return rn!=null?true:false;
    }
    public Node remove(Integer key)
    {
        int code=myGroup(key);
        LinkedList<Node>group=buckets[code];
        Node rn=foundInGroup(group,key);
         if(rn!=null)
        {
            this.size--;
            return group.removeFirst();
        }
        else
        {
            System.out.println("Element not found:-1");
    }
    public Node foundInGroup(LinkedList<Node>group,Integer key)
    {
        if(root==null) return null;
        int size=group.size();
        while (size>0){
            if(group.getFirst().key==key)
            return r.getFirst();
        }
        return addL
    }
    public boolean containskey(integer key)
    {
        int code=myGroup(key);
        LinkedList<Node>group=buckets[code];
        Node rn=foundInGroup(group,key);
        return rn!=null?true:false;
    }
    public Integer myGroup(Integer key){
        return MyHashCode(key)%buckets.length;
    }
    public int MyHashCode(Integer key)
    {
        int val=key.hashCode();
        return Math.ab(val);  //modulus
    }
}