import java.util.ArarayList;
public class questions {
    public static int DFS_SCC(int src,ArrayList<Integer>[] ngraph,boolean[] vis,ArrayList<Integer> ans){
        vis[src]=true;
        int count =0;
        for (int e: ngraph[src]){
            if(!vis[e])
            count+=DFS_SCC(e,ngraph,vis,ans);
        }
        ans.add(src);
        return count+1;
    }
    public static void DFS(){
        boolean[]vis=new boolean[N];
        ArrayList<Integer> ans=new ArrayList<>();
    }

}