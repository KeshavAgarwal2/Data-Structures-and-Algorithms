#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isqueensafec(vector<vector<bool>>&board,int x,int y){
    vector<vector<int>> dir={{-1,0},{0,-1},{-1,-1},{-1,1}};
    for(int i=0;i<dir.size();i++){
        for(int rad=1;rad<max(board.size(),board[0].size());rad++){
            int nx=x+rad*dir[i][0];
            int ny=y+rad*dir[i][1];
            if(nx<0||ny<0||nx>=board.size()||ny>=board[0].size())
            break;
            if(board[nx][ny])
            return false;
        }
    }return true;
}
int nqueencomb(vector<vector<bool>>&board,int lqpl,int qpsf,int tnq,string ans){
if(qpsf==tnq){
    cout<<ans<<endl;
    return 1;
}
int count=0;

for(int i=lqpl;i<board.size()*board[0].size();i++){
    int x=i/board[0].size();
    int y=i%board[0].size();
    if(isqueensafec(board,x,y)){
        board[x][y]=true;
        count+=nqueencomb(board,i+1,qpsf+1,tnq,ans+"("+to_string(x)+","+to_string(y)+")");
        board[x][y]=false;
    }
}
return count;
}
bool isqueensafep(vector<vector<bool>>&board,int x,int y){
    vector<vector<int>> dir={{-1,0},{0,-1},{-1,-1},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
    for(int i=0;i<dir.size();i++){
        for(int rad=1;rad<max(board.size(),board[0].size());rad++){
            int nx=x+rad*dir[i][0];
            int ny=y+rad*dir[i][1];
            if(nx<0||ny<0||nx>=board.size()||ny>=board[0].size())
            break;
            if(board[nx][ny])
            return false;
        }
    }
    return true;
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
    if(!board[x][y] && isqueensafep(board,x,y)){
    board[x][y]=true;
    count+=queen2Dperm(board,qpsf+1,tnq,ans+"("+to_string(x)+","+to_string(y)+")");
    board[x][y]=false;
    }
}
return count;
}
bool isqueensafe(vector<vector<bool>>&board,int x,int y){
    vector<vector<int>> dir={{-1,0},{0,-1},{-1,-1},{-1,1}};
    for(int i=0;i<dir.size();i++){
        for(int rad=1;rad<max(board.size(),board[0].size());rad++){
            int nx=x+rad*dir[i][0];
            int ny=y+rad*dir[i][1];
            if(nx<0||ny<0||nx>=board.size()||ny>=board[0].size())
            break;
            if(board[nx][ny])
            return false;
        }
    }return true;
}
int queen(vector<vector<bool>>&board,int row,int tnq,string ans){
    if(row==board.size() || tnq==0){
    if(tnq==0){
        cout<<ans<<endl;
        return 1;
    }
    return 0;
}
int count=0;
// calls++;                                            
for(int col=0;col<board[0].size();col++){
    if(isqueensafe(board,row,col)){
    board[row][col]=true;
    count+=queen(board,row+1,tnq-1,ans+"("+to_string(row)+","+to_string(col)+")");
    board[row][col]=false;
    }
}
return count;
}
int main(){
    vector<vector<bool>>board(4,vector<bool>(4,false));
    cout<<nqueencomb(board,0,0,4," ")<<endl;
    //cout<<queen2Dperm(board,0,4," ")<<endl;
    //cout<<queen(board,0,4," ")<<endl;
    //cout<<calls<<endl;
    return 0;
}