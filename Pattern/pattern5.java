import java.util.Scanner;
public class pattern5{
    public static void main(String[]args){
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter no. of rows: ");
        int n=scn.nextInt();
        int nst=1;
        int nsp=n/2;
        for(int r=1;r<=n;r++){
            for(int csp=1;csp<=nsp;csp++){
                System.out.print(" ");
            }
            
            for(int cst=1;cst<=nst;cst++){
                System.out.print("*");
            
            }
            System.out.println();
            if(r<=n/2){

            nst+=2;
            nsp--;
            }
            else
            {
                nst-=2;
                nsp++;
            }
        }

    }
}



