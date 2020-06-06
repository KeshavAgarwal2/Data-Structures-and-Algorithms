#include<iostream>
#include<vector>
using namespace std;
bool find(vector<int> &arr,int data)
{
    for(int i: arr)
    {
        if(i==data)
        return true;
    }
    return false;
}
int min(vector<int> &arr)
{
    int min=arr[0];
    for(int i: arr)
    {
        if(i<min)
        min=i;
    }
    return min;
}
int max(vector<int> &arr)
{
    int max=arr[0];
    for(int i: arr)
    {
        if(i<max)
        max=i;
    }
    return max;
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
    int a,n;
    cout<<"no. of elements in an array";
    cin>>a;
    vector<int> arr(a,0);
    input(arr);
    display(arr);
    cout<<"minimum no. in array: "<<min(arr)<<endl;
    cout<<"maximum no. in array: "<<max(arr)<<endl;
    cin>>n;
    bool x=find(arr,n);
    if(x==1)
    cout<<"element is present";
    else
    cout<<"element is not present";
}
