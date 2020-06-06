#include<vector>
#include<iostream>
#define vi vector<int>
#define vii vector<vi>
using namespace std;
void display(vi &dp)
{
    for(int ele: dp)
        cout<<ele<<" ";
    cout<<endl;
}
int fibo_01(int n,vi &dp){
    if(n<=1)
    {   
        dp[n]=n;
        return n;
    }
    if(dp[n]!=0)
        return dp[n];
    int ans=fibo_01(n-1,dp)+fibo_01(n-2,dp); 
    dp[n]=ans;
    return ans;
}
int fibo_02(int n,vi &dp)
{
    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            dp[i]=i;
            continue;
        }
    dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
void set1(){
    int n=10;
    vector<int>dp(n+1,0);
    cout<<fibo_01(n,dp)<<endl;
    cout<<fibo_02(n,dp)<<endl;
    display(dp);
}
void solve()
{
    set1();
}
int main(){
    solve();
}