#include<iostream>
#include<vector>
using namespace std;
bool find(vector<int>&arr,int idx,int data)
{
    if (idx==arr.size())
        return false;
   

    if (arr[idx]==data)
    return true;
    bool fi=find(arr,idx+1,data);
    return fi;
}
int max(vector<int>&arr,int idx)
{
    if (idx==arr.size()-1)
        return arr[idx];
    int ans=max(arr,idx+1);

    if (arr[idx]>ans)
        ans=arr[idx];
    return ans;
}
int min(vector<int>&arr,int idx)
{
    if (idx==arr.size()-1)
        return arr[idx];
    int ans=min(arr,idx+1);

    if (arr[idx]<ans)
        ans=arr[idx];
    return ans;
}
int main(int args,char** argv)
{
    vector<int> arr={10,20,30,40,50,60,70,7,8};
    cout<<find(arr,0,50)<<endl;
    cout<<max(arr,0)<<endl;
    cout<<min(arr,0);
    return 0;
}