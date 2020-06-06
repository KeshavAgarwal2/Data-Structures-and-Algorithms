import java.util.Scanner;
public class loops{
    public static Scanner scn=new Scanner (System.in);
    public static void main(String[] args){
        int n=scn.nextInt();
        for(int i=1;i<=n;i++){
            System.out.println(i) ;
        }
        for(int i=1;i<=n;i++){
            System.out.println(i*2) ;
        }
        int i=1;
        while(i<=n){
            System.out.println(i) ;
             i++;}
    }
}