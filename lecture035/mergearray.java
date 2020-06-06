import java.util.*;
public class mergearray{
    public static void display(int[] arr){
        for(int ele:arr){
            System.out.print(ele+" ");

        }
        System.out.println();
    }
    public static int[] mergeArrays(int[] arr1,int[] arr2){
        int[] arr=new int[arr1.length+arr2.length];
        int i=0,j=0,k=0;
        while(i<arr1.length || j<arr2.length){
            if(i<arr1.length && j<arr2.length){
                if(arr1[i]<arr2[j]){
                    arr[k++]=arr1[i++];
                }
                else{
                    arr[k++]=arr2[j++];
                }
            }
            else if(i<arr1.length){
                    arr[k++]=arr1[i++];
                }
            else if(j<arr2.length){
                    arr[k++]=arr2[j++];
            }
           
        }
         return arr;
    }
    public static void main(String[]args){
        int[]arr1={1,23,24,34};
        int[]arr2={1,2,3,12,15,17,19,20,22,44};
        display(mergeArrays(arr1,arr2));
    }
}