import java.util.Scanner;
public class rotate{
    public static void rotate(int[]arr,int k){
        k%=arr.length;
        k=k<0?k+arr.length:k;
        int[]new_arr=new int[arr.length];
        int idx=0;
        for (int i=k;i<arr.length;i++)
        {
            new_arr[idx]=arr[i];
            idx++;

        } 
        for(int i=0;i<k;i++)
        {
            new_arr[idx]=arr[i];
            idx++;
        }
        for (int i=k;i<arr.length;i++)
        {
            new_arr[idx]=arr[i];
        }
    }
    public static void main(String[] args){
    public static void main(String[] args){
        Scanner scn=new Scanner (System.in);
        int n=scn.nextInt();
        System.out.print("Enter number of elements");
        int[] arr=new int[n];
        rotate(arr,k);
    }
}
