import java.util.Scanner;
public class binarySearch2{
	public static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
		int[] arr = new int[10];
		input(arr);
		int data = scn.nextInt();
		System.out.println(binSearch(arr, data));
		System.out.println(upperBinSearch(arr, data));
		System.out.println(lowerBinSearch(arr, data));
	}
    public static void input(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			arr[i] = scn.nextInt();
		}
	}
    public static int BS(int[] arr,int data){

       int si=0;
       int ei=arr.length-1;

       while(si<=ei){
          int mid=(si+ei)/2;

          if(arr[mid]==data){
              return mid;
          }else if(arr[mid]>data)
             ei=mid-1;
           else  
              si=mid+1;
       }

       return -1;

   }

   public static int BSLB(int[] arr,int data){

       int si=0;
       int ei=arr.length-1;

       while(si<=ei){
          int mid=(si+ei)/2;

          if(arr[mid]==data){

       if(mid-1>=0 && arr[mid-1]==arr[mid])
            ei=mid-1;
        else
            return mid;
          }else if(arr[mid]>data)
             ei=mid-1;
           else  
              si=mid+1;
       }

       return -1;

   }


   public static int BSUB(int[] arr,int data){

       int si=0;
       int ei=arr.length-1;

       while(si<=ei){
          int mid=(si+ei)/2;

          if(arr[mid]==data){

       if(mid+1<arr.length && arr[mid+1]==arr[mid])
            si=mid+1;
        else
            return mid;
          }else if(arr[mid]>data)
             ei=mid-1;
           else  
              si=mid+1;
       }

       return -1;

   }


   public static int BSNearest(int[] arr,int data){

       int si=0;
       int ei=arr.length-1;

       while(si<=ei){
          int mid=(si+ei)/2;

          if(arr[mid]==data){
              return mid;
          }else if(arr[mid]>data)
             ei=mid-1;
           else  
              si=mid+1;
       }

       if(ei==-1) return si;
       else if(si==arr.length) return ei;
       else if(data-arr[ei]<=arr[si]-data)
          return ei;
        else return si;
   }

   
}