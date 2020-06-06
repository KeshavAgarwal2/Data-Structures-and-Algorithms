#include<iostream>
#include<vector>
using namespace std;
void zeroandone(vector<int> &arr)
{
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
    cout<<"Enter size of array";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"Enter array";
    for(int i=0;i<arr.size();i++)
        cin>>arr[i];
    zeroandone(arr);
    cout<<"Swapped array is";
    for(int i=-0;i<arr.size();i++)
        cout<<arr[i]<<" ";
}