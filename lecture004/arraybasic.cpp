#include<iostream>
#include<vector>
using namespace std;
// public static boolean find(int[] arr,int data) for java
bool find(vector<int>& arr,int data)
    { //cout << "enter a no from the array to find : ";
    for(int i:arr) //for (int i = 0; i < arr.size(); i++)
        { //arr.length(for java)
        if (i==data){ //if (arr[i] == data)
            return true; //cout<<"element "<<i<<" is present";
            }
        }
        return false;
    }
int maximum(vector<int>& arr){
        int max_=arr[0];
        for(int i:arr)
        {
            if(i>max_){
            max_=i;
            }
        }
        return max_;
    }
int minimum(vector<int>& arr){
    int min_=arr[0];
    for(int i:arr){
        if (i<min_){
            min_=i;
        }
    }
    return min_;
}    
void input(vector<int> &arr)
{
    cout<<"enter array:";
    for(int i=0;i<arr.size();i++)
        cin>>arr[i];
}
void display(vector<int> &arr)
{
    cout<<"entered array:";
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
}
int main(int args,char ** argv)
{
    int a,n,i;
    cout<<"no. of elements in an array";
    cin>>a;
    vector<int> arr(a,0);
    input(arr);
    // display(arr);
    // cout<<"minimum no. in array: "<<minimum(arr)<<endl;
    // cout<<"maximum no. in array: "<<maximum(arr)<<endl;
    cin>>n;
    bool x=find(arr,n);
    if(x==1)
    cout<<i; //"element is present";
    else
    cout<<"element is not present";
}