import java.util.Scanner;
import java.util.ArrayList;
public class mazepath{
public static void main(String[]args){
    solve();
}
public static void solve(){
    basicQuestion();
}
public static void basicQuestion(){
    System.out.println(mazepath("123"));
}
public static ArrayList<String>mazepath(String str){
    if(str.length()==0){
       ArrayList<String> base= new ArrayList<>();
       base.add("");
       return base; 
    }
    char ch=str.charAt(0);
    String restStr=str.substring(1);
    ArrayList<String> recAns=mazepath(restStr);
    ArrayList<String> myAns= new ArrayList<>();
    for(String s:recAns){
        myAns.add(s);
        myAns.add(ch+s);

    }
    return myAns;
}
}

