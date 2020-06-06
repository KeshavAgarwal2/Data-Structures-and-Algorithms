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
int mazePathHV_01(int er,int ec, vii&dp)
{
    for(int sr=er;sr>=0;sr--)
    {
        for(int sc=ec;sr>=0;sr--)
        {
            if(sr==er && sc==ec)
            {
                dp[sr][sc]=1;
                continue;
            }
            int count=0;
            if(sr+1<=er)
                count+=dp[sr+1][sc];
            if(sc+1<=ec)
                count+=dp[sr][sc+1];
            dp[sr][sc]=count;
        }
    }
}
int mazePathHV_01(int er,int ec, vii&dp)
{
    for(int sr=er;sr>=0;sr--)
    {
        for(int sc=ec;sr>=0;sr--)
        {
            if(sr==er && sc==ec)
            {
                dp[sr][sc]=1;
                return 1;
            }
            int count=0;
            if(sr+1<=er)
                count+=mazePathHV_01(sr+1,sc,er);
            if(sc+1<=ec)
                count+=dp[sr][sc+1];
            dp[sr][sc]=count;
        }
    }
}
void set1(){
    int n=10;
    vector<int>dp(n+1,0);
    
    display(dp);
}
void solve()
{
    set1();
}
int main(){
    solve();
}