class Solution {
    public class pair{
        int ele,i,j;
        pair(int ele,int i,int j){
            this.ele=ele;
            this.i=i;
            this.j=j;
        }
    }
    public int kthSmallest(int[][] matrix, int k) {
        PriorityQueue<pair>pq=new PriorityQueue<>((pair a,pair b)->{
            return a.ele-b.ele;
        });
        int n=matrix.length;
        int m=matrix[0].length;
        for(int i=0;i<n;i++)
        {
            pq.add(new pair(matrix[i][0],i,0));
        }
        while(--k>0){
            pair p=pq.poll();
            int x=p.i;
            int y=p.j;
            if(++y<m)pq.add(new pair(matrix[x][y],x,y));
        }
            return pq.poll().ele;
        
    }
}