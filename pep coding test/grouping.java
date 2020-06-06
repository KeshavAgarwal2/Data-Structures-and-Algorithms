
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn=new Scanner(System.in);            
        int n=scn.nextInt(); // 3       
        int[] arr=new int[n]; 
        for(int i=0;i<n;i++) 
        {
            arr[i]=scn.nextInt();  // 12 10 11 
        }
        int n1=scn.nextInt();  // 8
        int[] count=new int[n];
        for(int i=0;i<n1;i++)
        {
            int chk=scn.nextInt(); //11 12 12 11 12 10 12 12 
            for(int j=0;j<n;j++) // 12 10 11            {
                if(chk==arr[j]){ 
                    count[j]+=1; // count[j]=count[j]+1
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            while(count[i]!=0){
                System.out.print(arr[i]+" ");
                count[i]--;
            }
        }
    }
}