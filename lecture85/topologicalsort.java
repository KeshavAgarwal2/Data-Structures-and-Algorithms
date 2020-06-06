import java.util.ArrayList;
import java.util.LinkedList;

public class topologicalsort{
    public static void main(String[] args) {
		solve();
	}

	public static int N = 8;
    public static ArrayList < Integer > [] graph;
    

	public static void display() {
		for (int i = 0; i < graph.length; i++) {
			System.out.print(i + "-> ");   // u

			for (Integer e: graph[i]) {
				System.out.print(e+ ", ");   //v
			}
			System.out.println();
        }
        
        System.out.println();
	}


    public static void constructGraph() {
		graph = new ArrayList[N];
		for (int i = 0; i < N; i++) {
			graph[i] = new ArrayList < Integer > ();
        }

        graph[7].add(5);
        graph[7].add(6);
        graph[5].add(4);
        graph[5].add(2);
        graph[6].add(4);
        graph[6].add(3);
        graph[2].add(1);
        graph[3].add(1);
        graph[1].add(0);
           
        display();
    }
    

    //topic.===============================================

    public static void topologiaclSort_(int src,boolean[] vis,ArrayList<Integer> ans){
        vis[src]=true;
        
        for(Integer e: graph[src])
            if(!vis[e])
              topologiaclSort_(e,vis,ans);
        
        ans.add(src);
    }

    public static void topologiaclSort(){
        boolean[] vis=new boolean[N];
        ArrayList<Integer> ans=new ArrayList<>();

        for(int i=0;i<N;i++){
            if(!vis[i])
            topologiaclSort_(i,vis,ans);
        }

        for(int i=ans.size()-1;i>=0;i--) System.out.print(ans.get(i)+ " ");
    }

    public static void KhansAlgo(){
        int[] indegree=new int[N];
        for(int i=0;i<N;i++){
            for(Integer e: graph[i])
               indegree[e]++;
        }

        LinkedList<Integer> que=new LinkedList<>();
        for(int i=0;i<N;i++){
            if(indegree[i]==0) que.addLast(i);
        }

        ArrayList<Integer> ans=new ArrayList<>();

        while(que.size()!=0){
            int size=que.size();
            while(size--> 0){
                int rvtx=que.removeFirst();
                ans.add(rvtx);
      
                for(int e: graph[rvtx]){
                    if(--indegree[e]==0)
                       que.addLast(e);
                }
            }
        }

        if(ans.size()!=N) System.out.println("Cycle");
        else System.out.println(ans);
    }

	public static void solve(){
        constructGraph();
        // topologiaclSort();
        KhansAlgo();
    }
}

