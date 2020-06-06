// #include<iostream>
// #include<vector>
// using namespace std;
// void input(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swap(int arr[],int si,int ei)
// {
//     int temp=arr[si];
//     arr[si]=arr[ei];
//     arr[ei]=temp;
// }
// void reverse(int arr[],int si,int ei){
//     int n=si+ei+1;
//     while(si<ei)
//         {
//             swap(arr,si,ei);
//             si++;
//             ei--;
//         }
// }
// void display(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main(int args,char**argv){ 
//         int arr[5];
//         int n;
//         //int n=sizeof(arr)/sizeof(arr[0]);
//         cout<<"Enter no. of elements in array";
//         cin>>n;
//         cout<<"Enter the elements"<<" ";
//         input(arr,n);
//         reverse(arr,0,n-1);
//         display(arr,n);
// }
#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void swap(vector<int> &arr, int y, int x)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void reverse_(vector<int> &arr, int si, int ei)
{
    while (si < ei)
    {
        swap(arr, si, ei);
        si++;
        ei--;
    }
}

void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int args, char **argv)
{
    int a, n;
    cout << "Enter no of elements in the array : ";
    cin >> n;
    vector<int> arr(n, 0);
    cout << "Enter an array : ";
    input(arr);
    int si;
    cout << "Enter starting index : ";
    cin >> si;
    int ei;
    cout << "Enter end index : ";
    cin >> ei;
    reverse_(arr, si, ei);
    cout << "reversed array is : ";
    display(arr);
    return 0;
}