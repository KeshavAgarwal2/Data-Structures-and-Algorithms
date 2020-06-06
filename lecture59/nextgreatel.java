import java.util.*;
public class nextgreatel
{
    public static void nextGreateronRight(){
        int[] arr={4,5,2,25};
        Stack<Integer>st=new Stack<>();
        for(int i=0;i<arr.length;i++){
            if(st.size()==0){
                st.push(arr[i]);
                continue;
            }
            int ele=st.peek();
            while(st.size()!=0 && st.peek()<arr[i]){
                System.out.println(st.pop()+"->"+arr[i]);
            }
            st.push(arr[i]);
        }
        while(st.size()!=0)
        { 
            System.out.println(st.pop()+"->"+"No element");
        }
    }  
    public static void solve(){
        nextGreateronRight();
        System.out.println("");
    }
    public static void main(String[]args)
    {
        solve();
    }
}