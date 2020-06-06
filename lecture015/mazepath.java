import java.util.Scanner;
import java.util.ArrayList;
public class mazepath{
public static ArrayList<String>mazepath_multiMoves(int si,int ei,int sp,int ep){
ArrayList<String> myAns=new ArrayList<>();

if(si==sp&&ei==ep){
       ArrayList<String> base= new ArrayList<>();
       base.add("");
       return base; 
    }

for(int jump=1;jump+si<=sp;jump++){
    ArrayList<String> hrecAns=mazepath_multiMoves(si+jump,ei,sp,ep);
    for (String s:hrecAns)
    {
        myAns.add("H"+jump+s);
    }
}
for(int jump=1;jump+ei<=ep;jump++){
    ArrayList<String> VRecAns=mazepath_multiMoves(si,ei+jump,sp,ep);
    for(String s:VRecAns){ 
        myAns.add("V"+jump+s);
    }
}
for (int jump=1;si+jump<=sp && ei+jump<=ep;jump++){
    ArrayList<String>DrecAns=mazepath_multiMoves(si+jump,ei+jump,sp,ep);
    for(String s:DrecAns){
        myAns.add("D"+jump+s);
    }
}
return myAns;
}
public static void main(String[]args){
    System.out.println(mazepath_multiMoves(0,0,3,3));

}
}
