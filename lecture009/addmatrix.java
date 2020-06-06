import java.util.Scanner;
public class addmatrix{
public static Scanner scn= new Scanner(System.in);
public static void input(int [][]arr){


    for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
        arr[row][col]=scn.nextInt();
      //  arr2[row][col]=scn.nextInt();
          // System.out.print(row);
          // System.out.println(col);

        }
    }
}
public static void disp(int[][]arr){
 
    for(int[] ar:arr){
        for(int i:ar){
            System.out.print(i+" ");
        }
        System.out.println();
    }
} 
public static void add(int[][]arr,int[][]arr2){
   
    int[][]add=new int[arr.length][arr[0].length];
    for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
                arr[row][col]=arr[row][col]+arr2[row][col];
        }
    }
}
public static void main(String[]args){
    System.out.println("Enter row and column");
    int n=scn.nextInt();
    int m=scn.nextInt();
    
   
    int[][]arr=new int[n][m];
    int[][]arr2=new int[n][m];
    input(arr);
    input(arr2);
   // disp(arr);
    add(arr,arr2);
    disp(arr);
    System.out.println();
}
}
