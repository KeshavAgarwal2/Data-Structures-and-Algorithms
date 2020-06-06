import java.util.Scanner;
public class pattern4{
    public static void main(String[]args){
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int nst=1;
        int nsp=n/2;
        int value;      
        for(int r=1;r<=n;r++){
            if(r>n/2){
                value=n-r+1;
            }
            else
            value=r;         
            for (int csp=1;csp<=nsp;csp++){
                System.out.print(" ");
            }
            for (int cst=1;cst<=nst;cst++){
            System.out.print(value);
            if(cst<=nst/2){
                value++;
            }
            else{
                value--;
            }
            }
        System.out.println();
        if(r<=n/2){
            nsp--;
            nst=nst+2;   
        }
        else{
            nsp++;
            nst=nst-2;   
        }
    }
}
}