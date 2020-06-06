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
int pairAndSingle_01(int n,vi &dp){
    if(n<=1)
    {
        dp[n]=1;
        return 1;
    }
    if(dp[n]!=0)
    return dp[n];
    int singleWays=pairAndSingle_01(n-1,dp);
    int pairUpWays=pairAndSingle_01(n-2,dp)*(n-1);
    dp[n]=singleWays + pairUpWays;
    return dp[n];
}
int pairAndSingle_01(int n,vi &dp){
    if(n<=1)
    {
        dp[n]=1;
        return 1;
    }
    if(dp[n]!=0)
    return dp[n];
    int singleWays=pairAndSingle_01(n-1,dp);
    int pairUpWays=pairAndSingle_01(n-2,dp)*(n-1);
    dp[n]=singleWays + pairUpWays;
    return dp[n];
}
int pairAndSingle_02(int n,vi &dp){
    for(int i=0;i<=n;i++)
    {
        if(n<=1)
        {
            dp[n]=1;
            continue;
        }
    int singleWays=dp[i-1];
    int pairUpWays=dp[i-2]*(i-1);
    dp[i]=singleWays + pairUpWays;
    }
    return dp[n];
}
void set2(){
    int n=10;
    vector<int>dp(n+1,0);
    pairAndSingle_01(n,dp);
}
int main(int args,char** argv){
    set2();

}