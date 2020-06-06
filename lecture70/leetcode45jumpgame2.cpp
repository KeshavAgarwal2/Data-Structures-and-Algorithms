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
int Minjump_01(int idx,vi &arr,vector<int> &dp)
{
    if(idx==arr.size()-1)
    return 0;
    if(dp[idx]!=0)
    return dp[idx];

    int minAns=(int)1e7;
    for(int jump=1;jump<=arr[idx] && idx+jump<arr.size();jump++)
    {
        int minJump=MinJump_01(idx+jump,arr);
        if(minjump !=(int)1e7 && minJump+1<minAns)
        minAns=minJump+1;
    }
    }

void set2(){
    int n=10;
    vector<int>dp(n+1,0);
    //pairAndSingle_01(n,dp);
}
int main(int args,char** argv){
    set2();

}