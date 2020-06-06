import java.util.Scanner;
public class count01{

    public static void main(String[] args){
        Scanner scn=new Scanner (System.in);
        
        System.out.println("Enter number of elements");
        int n=scn.nextInt();
        
        System.out.println("The elements are: ");
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scn.nextInt();  
        }
        zeroandone(arr);
        System.out.println("The swaped array are: ");
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");  
        }   
    }
    public static void zeroandone(int []arr)
    {
        int ptr=0;
        int itr=0;
        while(itr<arr.length)
        {
            if(arr[itr]==0){
                swap(arr[itr],arr[ptr]);
                ptr++;
        }
        itr++;
        }
    }
}