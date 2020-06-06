import java.util.Scanner;

public class binarysearchbool{
    public static Scanner scn = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.print("Enter length of array : ");
        int n = scn.nextInt();
        int[] arr = new int[n];
        System.out.print("Enter array(in ascending order) : ");
        input(arr);
        System.out.print("Enter a elemnt to search : ");
        int data = scn.nextInt();
        boolean x = BS(arr, data);
        if (x == true)
            System.out.print("Found");
        else
            System.out.print("Not Found");

        // if(x==1)
        // System.out.print("Found");
        // else
        // System.out.print("Not found");
        // display(arr);
    }

    public static void input(int[] arr) {
        for (int i = 0; i < arr.length; i++)
            arr[i] = scn.nextInt();

    }
    // public static void display(int[] arr)
    // {
    // if(){
    // System.out.print("data is present");
    // }
    // else{
    // System.out.print("data is absent");
    // }

    // }
    public static boolean BS(int[] arr, int data) {
        int si = 0;
        int ei = arr.length - 1;

        while (si < ei) {
            int mid = (si + ei) / 2;

            if (arr[mid] == data) {
                return true;
                // System.out.print("Found");
            } else if (arr[mid] > data) {
                ei = mid - 1;
            } else {
                si = mid + 1;
            }

            // return -1;
        }
        si++;
        ei--;
        return false;
    }
}