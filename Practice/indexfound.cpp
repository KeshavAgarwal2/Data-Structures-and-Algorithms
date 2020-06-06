#include<iostream>
#include<vector>
using namespace std;
int find(int n, vector<int> &arr, int num, int idx)
{
    if(idx == n)
        return -1;
    if(arr[idx] == num)
        return idx;
    
    int a = find(n,arr,num,idx+1);
    return a;
}
int main()
{
    int n,num;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];            
    }
    try
    {
        cin>>num;
    }
    
    catch(int num)
    {
        cout<<"Invalid Input";
    }
    
        cout<<find(n,arr,num,0);
    return 0;
}
// bool find(vector<int>& arr,int data){ 
//     for(int i:arr) 
//         {
//         if (i==data) 
//             return true;
//         }
//         return false;
// }
// void input(vector<int> &arr){
//     cout<<"enter array:";
//     for(int i=0;i<arr.size();i++)
//         cin>>arr[i];
// }
// int main(int args,char ** argv)
// {
//     int a,n,i;
//     cout<<"no. of elements in an array";
//     cin>>a;
//     vector<int> arr(a,0);
//     input(arr);
//     cin>>n;
//     bool x=find(arr,n);
//     if(x==1)
//     cout<<i; //"element is present";
//     else
//     cout<<"-1";  //"element is not present";
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int find(vector<int> &arr,int data)
// {
//     for(int i=0;i<arr.size();i++)
//     {
//         if(arr[i]==data)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n,x,i;
//     cin>>n;
//     vector<int> arr(n,0);
//     for(i=0;i<arr.size();i++)
//     {
//         cin>>arr[i];
//     }
//     cin>>x;
//     find(arr,x);
//     return 0;
// }
