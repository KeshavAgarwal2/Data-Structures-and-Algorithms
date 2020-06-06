#include<iostream>
#include<vector>
using namespace std;
//Kadanes Algorithm
void maxSubarray(vector<int>&arr)
{   int s=0,  si=0,ei=0;
int imax=0, omax=-10000;
    for(int i=0;i<arr.size();i++){
    imax+=arr[i];        
    if(omax<imax){
        ei=i;
        si=s;
        omax=imax;
    }
    if(imax<0){
        s=i+1;
        imax=0;
    }
   }  
    cout<<omax; 
}    
void print(vector<int>& arr,int si,int ei)
{
    for(int i=si;i<=ei;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(int args,char** argv){
    int s=0,  si=0,ei=0;
int imax=0, omax=-10000 ,n; 
        cout<<"enter the size of array : ";
        cin>>n;
        vector<int> arr(n,0);
        cout<<"enter array : ";
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
        maxSubarray(arr);
        print(arr,si,ei);
}



 