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
int boardPath(int st,int end,vector<int> &dp){
    
    if(st==end){
        dp[st]=1; 
        return 1;
    }
    if(dp[st]!=0) 
    return dp[st];
    int count=0;
    for(int dice=1;dice<=6;dice++){
        if(st+dice<=end){
            count+=boardPath(st+dice,end,dp);
        }
    }
    //dp=st[count];
    return count;
}
int boardPathgiveoutcomes(int st,int end,vector<int> &outcomes,vector<int> &dp){
    
    if(st==end){
        dp[st]=1;
        return 1;
    }
    if(dp[st]!=0) 
    return dp[st];
    int count=0;
    for(int dice=1;outcomes.size() && st+outcomes[dice];dice++){
        if(st+dice<=end){
            count+=boardPath(st+dice,end,dp);
        }
    }
    //dp=st[count];
    return count;
}
void boardPath(){
    int n=10;
    vector<int> dp(n+1,0);
    cout<<boardPath(0,n,dp)<<endl;
    display(dp);
}

int main(int args,char** argv){
    boardPath();

}