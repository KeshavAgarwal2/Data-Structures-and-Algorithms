import java.util.Scanner;
import java.util.ArrayList;
public class pcsubstring{
public static void main(String[]args){
    solve();
}
public static void solve(){
    basicQuestion();
}
public static void basicQuestion(){
    System.out.println(permutation("123"));
}
public static ArrayList<String> permutation(String str){
    if(str.length()==0){
       ArrayList<String> base= new ArrayList<>();
       base.add("");
       return base; 
    }
    char ch=str.charAt(0);
    String restStr=str.substring(1);
    ArrayList<String> recAns=permutation(restStr);
    ArrayList<String> myAns= new ArrayList<>();
    for(String s:recAns){
        for(int i=0;i<=s.length();i++){
            String one=s.substring(0,i);
            String two=s.substring(i);
            String ans=one+ch+two;
        myAns.add(ans);
        }

    }
    return myAns;
}
}

