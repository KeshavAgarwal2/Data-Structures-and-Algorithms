#include<iostream>
#include<vector>
#include<string>
using namespace std;
int queen2Dcombi(vector<vector<bool>>&board,int lqpl,int qpsf,int tnq,string ans){
if(qpsf==tnq){
    cout<<ans<<endl;
    return 1;
}
int count=0;
for(int i=lqpl;i<board.size()*board[0].size();i++){
    int x=i/board[0].size();
    int y=i%board[0].size();
    count+=queen2Dcombi(board,i+1,qpsf+1,tnq,ans+"("+to_string(x)+","+to_string(y)+")");
}
return count;
}
int queen2Dperm(vector<vector<bool>>&board,int qpsf,int tnq,string ans){
if(qpsf==tnq){
    cout<<ans<<endl;
    return 1;
}
int count=0;
for(int i=0;i<board.size()*board[0].size();i++){
    int x=i/board[0].size();
    int y=i%board[0].size();
    if(!board[x][y]){
    board[x][y]=true;
    count+=queen2Dperm(board,qpsf+1,tnq,ans+"("+to_string(x)+","+to_string(y)+")");
    board[x][y]=false;
    }
}
return count;
}
int main(){
    vector<vector<bool>>board(4,vector<bool>(4,false));
    //cout<<queen2Dcombi(board,0,0,4," ")<<endl;
    cout<<queen2Dperm(board,0,4," ")<<endl;
    return 0;
}