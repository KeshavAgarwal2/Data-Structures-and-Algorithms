import java.util.ArrayList;
public class graph{
    public static class Edge{
        int v=0;
        int w=0;
        Edge(int v,int w){
            this.v=v;
            this.w=w;
        }
    }
    public static ArrayList<ArrayList<Edge>> graph=new ArrayList<>();
        public static void main(String[]args){
        constructGraph();
        } 
        public static void addEdge(int u,int v,int w){
            if(u<0 || v<0 || u>graph.size() || v>=graph.size())
            return;
            graph.get(u).add(new Edge(v,w));
            graph.get(v).add(new Edge(u,w));
        }
        public static void constructGraph(){
            int n=7;
            for(int i=0;i<n;i++){
                graph.add(new ArrayList<>());
            }
            addEdge(0,1,10);
            addEdge(0,3,10);
            addEdge(1,2,10);
            addEdge(2,3,40);
            addEdge(3,4,2);
            addEdge(4,5,2);
            addEdge(4,6,3);
            addEdge(5,6,8);
            display();
        }
        public static void display(){
            for(int i=0;i<graph.size();i++){
                System.out.print(i+"->");
                for(Edge e:graph.get(i)){
                    System.out.print("("+ e.v + "," + e.w + ")");
                }
                System.out.println();
            }
        } 
    }