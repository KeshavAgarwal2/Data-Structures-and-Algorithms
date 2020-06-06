import java.util.Scanner;
public class fibonaccipatern {
    public static Scanner scn= new Scanner(System.in);
    public static void main(String[]args)
    {
        int n=scn.nextInt();
        int a=0;
        int b=1;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print(a+" ");
                sum=a+b;
                a=b;
                b=sum;
            }
        System.out.println();
        }
        

    }

}