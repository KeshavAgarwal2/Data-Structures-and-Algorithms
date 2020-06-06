import java.util.Scanner;
public class waveh{
    static Scanner scn=new Scanner (System.in);
    public static void input(int[][]arr){

    
        for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
           arr[row][col]=scn.nextInt();

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
public static void (int[][] arr){
    for(int row=0;row<arr.length;row++){
        if(row%2==0){
            for(int col=0;col<arr[0].length;col++)
            System.out.print(arr[row][col]);
        }
        else{
            for(int col=arr.length-1;col>=0;col--)
            System.out.print(arr[row][col]);
        }
    }
}
public static void main(String[]args){
    System.out.println("Enter row and column");
    int n=scn.nextInt();
    int m=scn.nextInt();
    int[][]arr=new int[n][m];
    input(arr);
    print(arr);
    waveh(arr);
    System.out.println();
}
}