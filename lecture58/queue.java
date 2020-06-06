import java.util.*;
public class stq{
    public static class {
        int[] st;
        int tos=-1;
        stack(){
            this.st=new int[10];
        }
        stack(int size){
            this.st=new int[size];
        }
        stack(int[]arr){
            this.st=new int[2*arr.length];
            for(i=0;i<arr.length;i++){
                this.st[i]=arr[i];
            }
            this.tos=arr.length-1;
        }
        public boolean isEmpty(){

        }
        public void push(int data){
            if(tos==st.length){
                System.out.println("Stack Overflow:"+tos);
                return;
            }
            st[tos++]=data;
        }
        public int top(){
            if(tos==-1){
                System.out.println("Stack is empty");
                return -1;
            }
            return st[tos];
        }
         public int pop(){
            if(tos==-1){
                System.out.println("Stack is empty");
                return -1;
            }
            int rv=arr[tos];
            arr[tos]=0;
            tos--;
            return rv;
        }
    }
    int main(){
        int[] arr={10,20,30,40};
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();

        }
