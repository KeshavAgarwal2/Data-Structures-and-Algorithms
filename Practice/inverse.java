import java.io.*;
import java.util.*;

public class inverse{
    public static Scanner scn=new Scanner(System.in);
    public static void main(String[] args){
        int n=scn.nextInt();
        int[]arr=new int[n];
        int[]inv=new int[arr.length];
        input(arr); 
        for(int i=0;i<arr.length;i++){
            int val=arr[i];
            inv[val]=i;
        }
         for(int val:arr){
            System.out.print(val+" ");
        }
    }
    public static void input (int []arr){
        for(int i=0;i<arr.length;i++){
            arr[i]=scn.nextInt();
        }
    }
}