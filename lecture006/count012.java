import java.util.Scanner;
public class count012{
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[]args)
    {
        System.out.println("Enter number of elements");
        int n=scn.nextInt();
        System.out.println("the elements are: ");
        int[] arr=new int[n];
        for(int i=0;i<arr.length;i++){
            arr[i]=scn.nextInt();
        }
        zerooneandtwo(arr);
        System.out.print("The swapped array is: ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void swap(int[]arr,int y,int x)
    {
        int temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }
    public static void zerooneandtwo(int[] arr)
    {
        int pt1=0;
        int pt2=arr.length-1;
        int itr=0;
        while(itr<=pt2){
            if(arr[itr]==0)
            {
                swap(arr,itr,pt1);
                pt1++;
                itr++;
            }
            else if(arr[itr]==2){
                swap(arr,itr,pt2);
                pt2--;
            }
            else{
                itr++;
            }
        }
    }   
}