#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define vb vector<bool>
#define vbb vector<vb>

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
int MCM_memo(vi &arr,int si,int ei,vii &dp)
{
    if(si+1==ei)
    return 0;

if(dp[si][ei]!=0)
return dp[si][ei];

int minAns=1e7;
for(int cut=si;cut<;cut++)
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
    //cout<<maxSquareOf1s(0,0,arr,dp)<<endl;
}
int main(int args,char** argv){
    set2();

}