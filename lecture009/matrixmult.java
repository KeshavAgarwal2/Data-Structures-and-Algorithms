import java.util.Scanner;
public class matrixmult{
static Scanner scn= new Scanner(System.in);
public static void input(int [][]arr){


    for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
        arr[row][col]=scn.nextInt();
      

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
public static void mult(int[][]arr,int[][]arr2){
   
    int[][]mult=new int[arr.length][arr[0].length];
    for(int row=0;row<arr.length;row++){
        for(int col=0;col<arr[0].length;col++){
            for(int k=0;k<arr.length;k++){

            
                mult[row][col]+=arr[row][k]*arr2[k][col];
            }
        }
    }
    disp(mult);
}
public static void main(String[]args){
    System.out.println("Enter row and column");
    int n=scn.nextInt();
    int m=scn.nextInt();
    
   
    int[][]arr=new int[n][m];
    int[][]arr2=new int[n][m];
    input(arr);
    input(arr2);
    mult(arr,arr2);
    
    System.out.println();
}
}
