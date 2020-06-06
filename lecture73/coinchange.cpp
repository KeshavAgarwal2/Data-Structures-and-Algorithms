#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>
#define vii vector<vi>

using namespace std;

void display(vi &dp)
{
    for (int ele : dp)
        cout << ele << " ";
    cout << endl;
}

void display2D(vii &dp)
{
    for (vi &ar : dp)
    {
        for (int &ele : ar)
            cout << ele << " ";
        cout << endl;
    }
    cout << endl;
}
int coinchangeperm(vi &arr,int tar,vi &dp)
{
    if(tar==0)
    {
        return dp[tar]=1;
    }
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
    if(tar-arr[i]>=0)
    count += coinchangeperm(arr,tar - arr[i],dp);
    }
    return dp[tar]=count;

}
void set2()
{
    //int n=10;
    //vector<int>dp(n+1,0);
    //pairAndSingle_01(n,dp);
    vector<int>arr {2,3,5,7};
    int target=10;
    int c=coinchangeperm(arr,10," ");
    cout<<c; 
}
int main(int args,char** argv){
    set2();

}