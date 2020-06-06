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
int maxSquareAns = 0;
int maxSquareOf1s(int r,int c,vii &arr,vii &dp)
{
    if(r==arr.size() || c==arr[0].size())
    {
        return 0;
    }
    if(dp[r][c]!=-1)
    return dp[r][c];

    int down = maxSquareOf1s(r+1,c,arr,dp);
    int diag = maxSquareOf1s(r+1,c+1,arr,dp);
    int right = maxSquareOf1s(r,c+1,arr,dp);
    int minPossibleSquare = 0;
    if(arr[r][c]==1)
    minPossibleSquare=min(down,min(diag,right))+1;
    dp[r][c]=minPossibleSquare;
    maxSquareAns=max(dp[r][c],maxSquareAns);
    return dp[r][c];
}

void set2()
{
    //int n=10;
    //vector<int>dp(n+1,0);
    //pairAndSingle_01(n,dp);
    vii arr={{0,1,1,0,1},
             {1,1,0,1,0},
             {0,1,1,1,0},
             {1,1,1,1,0},
             {0,0,0,0,0}};
    vii dp(arr.size(), vi(arr[0].size(),-1));
    cout<<maxSquareOf1s(0,0,arr,dp)<<endl;
}
int main(int args,char** argv){
    set2();

}