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
vb isPalindromeSubString(String str)
{
    vbb dp(str.length(),vb (str.length(),false));
    for(int gap=0;gap<str.length();gap++)
    {
        for(int i=0,j=gap;j<str.length();j++,i++)
        {
            if(gap==0)
            dp[i][j]=true;
            else if(str[i]==str[j]){
            if(gap==1)
            dp[i][j]=true;
            else if(dp[i+1][j-1])
            dp[i][j]=true;
            }
        }
    }
    return dp[0][str.length()-1];
}
int LongestPalindromeSubstring(string str,vii &dp)
{
    vbb isPal=isPalindromeSubString(str);
    for(int gap=0;gap<str.length;gap++)
    {
        for(int i=0;i<str.length;i++)
    }
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