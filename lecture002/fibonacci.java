import java.util.Scanner;
public class fibonacci{
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args) {
        int n = scn.nextInt();
        int a=0;
        int b=1;
        int sum=0;
        if (n>=1){
            System.out.println("Fibonacci series:"+a);
            if(n==1)
            return;
        }
        if (n>=2){
            System.out.println("Fibonacci series:"+b);
            if(n==2)
            return; 
        }
        for(int i=3;i<=n;i++){
            sum=a+b;
            a=b;
            b=sum; 
            System.out.println(sum+" ");
        }
        //System.out.println();
        //System.out.println(sum); 
    }
}