#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr,int i,int j)
{
    for(int k=i;k<=j;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
void substring(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            print(arr,i,j);
        }
    //    cout<<endl;
    }
}    
int main(int args,char** argv){
    vector<int> arr={1,2,3,4,5,6};
    substring(arr);
   // print(arr,i,j);
}