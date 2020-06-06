import java.util.Scanner;
public class findmatrix{
    static Scanner scn=new Scanner (System.in);
    public static void input(int[][]arr){

    
        for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
           System.out.print(row);
           System.out.println(col);

        }
    }
}
public static void print(int[][]arr){
 
    for(int[] ar:arr){
        for(int i:ar){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}

public static boolean find(int[][] arr,int data){
    for(int[]ar:arr){
        for(int i:ar){
            if(i==data)
            return true;
        }
    }
    return false;       
}
public static void main(Strings[]args){
int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
    vector<vector<int>>
    arr(r,vector<int>(c,0));
        input(arr);
        print(arr);
}
}

