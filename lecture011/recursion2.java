import java.util.Scanner;
public class recursion2{
static Scanner scn=new Scanner (System.in);
public static void main(String[]args){
    int n;
    n=scn.nextInt();
    incdec(1,n);
}
public static void incdec(int a,int b){
    if(a==b)
    {
        System.out.println(a);
        return;
    }
    System.out.println(a);
    incdec(a+1,b);
    System.out.println(a);
} 
}
// public static void main(String[]args){
//     int n;
//     n=scn.nextInt();
//     increasing(1,n);
//     decreasing(1,n);
// }
// public static void increasing(int a,int b){
//     if (b==a-1)
//         return;
//     increasing(a,b-1);
//     System.out.println(b);
// }
// public static void decreasing(int a,int b){
//     if (b==a)
//         return;

//     System.out.println(b-1);
//     decreasing(a,b-1);
// }
