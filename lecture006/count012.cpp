#include<iostream>
#include<vector>
using namespace std;
void zeroAndone(vector<int>& arr){
    int pt1=0;
    int pt2=arr.size()-1;
    int itr=0;
    while(itr<=pt2){
        if(arr[itr]==0){
            swap(arr[itr],arr[pt1]);
            pt1++;
            itr++;
        }
        else if(arr[itr]==2){
        swap(arr[itr],arr[pt2]); 
        pt2--;        
        }
        else
        {
            itr++;
        }
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
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }

