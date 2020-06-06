import java.util.Scanner;
public class recursion3{

public static void main(String[]args){
    
    oddeven(1,5);
    }
public static void oddeven(int a,int b){
        if(a==b)
    {
        System.out.println(a);
        return;
    }
    if(a%2!=0)
    System.out.println(a);
    oddeven(a+1,5);
     if(a%2==0)
System.out.println(a);
}
}