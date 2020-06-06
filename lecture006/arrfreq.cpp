#include<iostream>
#include<vector>
using namespace std;
int potentialcandidate(vector<int> &arr)
{
    int freq=1;
    int suspect=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(suspect==arr[i])
            freq++;
        else
            freq--;
        if(freq==0)
        {
            freq=1;
            suspect=arr[i];
        }
    }
    return suspect;
}
bool isreallyans(vector<int> &arr,int data)
{
    int count=0;
    for(int i:arr)
    {
        if(i==data)
        count++;
    }
    if(count>(arr.size()/2)){
        return true;}
    return false;
}
int main(int args,char** argv)
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"enter the elements in array";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int data=potentialcandidate(arr);
    bool ans=isreallyans(arr,data);
    if(ans==true)
        cout<<"Potential: "<<data;
    else
        cout<<"-1";
}