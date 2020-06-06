import java.util.Scanner;
public class idxarr{
static Scanner scn=new Scanner (System.in);

public static void main(String[]args){
    int[]arr={100,20,30,40,50,100,100};
    System.out.println(allIdx(arr,0,100,0)[1]);
}
public static int[] allIdx (int[]arr,int idx,int data,int count){
    if (idx==arr.length){
        int[] baseArray=new int[count];
        return baseArray;
    }
    if(arr[idx]==data)
    {
        count++;
    }
    int [] recAns=allIdx(arr,idx+1,data,count);
    if(arr[idx]==data)
    {
        recAns[count-1]=idx;
    }
    return recAns;
}
}