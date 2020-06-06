#include<iostream>
#include<vector>
using namespace std;
int coinchange2p(vector<int>&arr,vector<bool> &isdone, int idx,int target,string ans)
{
    if(idx==arr.size() || target==0)
    {
        if (target==0)
        {
            cout<<ans<<endl;
            return 1;
        }
        return 0;
    }
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if (target-arr[i]>=0 && isdone[i])
        {
            isdone[i]=true;
            count+=coinchange2p(arr,isdone,count,target-arr[i],ans+to_string(arr[i]));
            isdone[i]=false;
        }
    }
return count;
}
int main(){
    vector<int>arr {2,3,5,7};
    int target=10;
    vector<bool> isdone (4,false);
    int c=coinchange2p(arr,isdone,0,10," ");
    cout<<c;
    return 0;
}

