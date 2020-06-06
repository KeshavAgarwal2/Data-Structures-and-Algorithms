#include<iostream>
#include<vector>
using namespace std;

void zeroAndone(vector<int>& arr){
    int ptr=0;
    int itr=0;
    while(itr<arr.size())
    {
        if(arr[itr]==0){
            swap(arr[itr],arr[ptr]);
            ptr++;
        }
    itr++;  
    }
}
 int main(){
        int n;
        cout<<"enter the size of array : ";
        cin>>n;
        vector<int> arr(n,0);
        cout<<"enter array : ";
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }        
        zeroAndone(arr);
        cout<<"swaped array is : ";
        for(int i=0;i<arr.size() ;i++){
            cout<<arr[i]<<" ";
        }
}