import java.util.Scanner;
public class simpleinterest{
    public static Scanner scn=new Scanner(System.in);//for input
    public static void main(String[]args){
    
        /*int p,r,t,si;
        p=1000;
        r=2;
        t=3;*/
       
        System.out.println("enter p: ");
        int p = scn.nextInt();
        System.out.println("enter r: ");
        int r = scn.nextInt();
        System.out.println("enter t: ");
        int t = scn.nextInt();
        int si=(p*r*t)/100;

        System.out.println("Simple Interest is:"+si);
    }
} 