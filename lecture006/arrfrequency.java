import java.util.Scanner;
public class arrfrequency{

    public static void main(String[] args){
        Scanner scn=new Scanner (System.in);
        
        System.out.println("Enter number of elements");
        int n=scn.nextInt();
        
        System.out.println("The elements are: ");
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scn.nextInt();
            
        }
        int data=ispotential(arr);
        boolean ans = isreallyans(arr,data);
        if (ans == true)
            System.out.println("Solution"+data);
        else
            System.out.println("Solution"+ -1);    

        
    }
    public static int ispotential (int[]arr){
        int freq=1;
        int suspect=arr[0];
        for(int i=1;i<arr.length;i++)
        {         
            if(suspect==arr[i])
                freq++;
            else
                freq--;
            
            if(freq==0){
                freq=1;
                suspect=arr[i];
            }        
        }
        return suspect;
    }
            
public static boolean isreallyans(int[]arr,int data){
    int freq=0;
    for(int i: arr){
        if(i==data){
            freq++;
        }
        if(freq>arr.length/2){
            return true;
        }
    }
    return false;
}
} 
 



