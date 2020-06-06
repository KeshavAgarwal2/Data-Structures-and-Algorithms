import java.util.Scanner;
public class pattern2{
    public static void main(String[]args){
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter no. of rows");
        int n=scn.nextInt();
        int nst=n;
        int nsp=n-1;
        for(int r=1;r<=n;r++){
            for(int cst=1;cst<=nst;cst++){
                System.out.print("*");
            }
            
            for(int csp=1;csp<=nsp;csp++){
                System.out.print(" ");
            
            }
            System.out.println();
            nst--;
            nsp++;
        }

    }
}