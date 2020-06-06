#include<iostream>
#include<vector>
using namespace std;
int coin(vector<int>&arr,int idx,int target,string ans)
{
    if (idx==arr.size() || target==0)
    {
        if (target==0)
        {
            cout<<ans<<endl;
            return 1;
        }
        return 0;
    }
    int count=0;
    for(int i=idx;i<arr.size();i++)
    {
        if (target-arr[i]>=0)
        {
            count+=coin(arr,i,target-arr[i],ans+to_string(arr[i]));
        }
    }
    return count;
}
int main(){
    vector<int>arr {2,3,5,7};
    int target=10;
    int c=coin(arr,0,10," ");
    cout<<c;
    return 0;
}