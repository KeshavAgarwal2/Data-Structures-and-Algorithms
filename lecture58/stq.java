import java.util.*;
public class stq{
    public static class stack{
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
            for(int i=0;i<arr.length;i++){
                this.st[i]=arr[i];
            }
            this.tos=arr.length-1;
        }
        public boolean isEmpty(){
            return tos == -1;
        }
        public void display() {
        for (int i = tos; i >= 0; i--) {
            System.out.println(st[i] + " ");
        }
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
            int rv=st[tos];
            st[tos]=0;
            tos--;
            return rv;
        }
    }
    public static void main(String[] args){
        int[] arr={10,20,30,40};
        stack st=new stack(arr);
        st.tos = 3;

        // st.pop();
        // st.pop();
        // st.pop();
        //st.pop();
        st.display();
   }
}
