import java.util.Scanner;
public class evenodd{
    public static Scanner scn=new Scanner(System.in);
    public static void main(String[]args){
        System.out.println("Enter the number");
        int num = scn.nextInt();
        
        if(num%2==0)
        System.out.println("number is even");
        else 
        System.out.println("number is odd");
  
    }
}