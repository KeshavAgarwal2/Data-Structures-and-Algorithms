import java.util.Scanner;
public class reverse{
    public static void main(String[] args){
        static Scanner scn=new Scanner(System.in);
        System.out.print("Enter number of elements");
        int n=scn.nextInt();
        int[]arr=new int[n];
        input(arr); 
        System.out.print("Enter starting index of reverse");
     //   int si=scn.nextInt();
        
        System.out.print("Enter ending  index of reverse");
     //   int ei=scn.nextInt();
        reverse(arr,0,arr.length-1);
        disp(arr);

    }
    // input for the array
    public static void input (int []arr){
        Scanner scn = new Scanner(System.in);
        for(int i=0;i<arr.length;i++){
            arr[i]=scn.nextInt();
        }
    }
    public static void swap(int[]arr,int y,int x)
    {
        int temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }
    public static void reverse(int[]arr,int si, int ei){
        int len=si+ei+1;
        while(si<ei){
            
            int temp=arr[si];
            arr[si]=arr[ei];
            arr[ei]=temp;
            si++;
            ei--;

        }
    }
    public static void disp(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}    
