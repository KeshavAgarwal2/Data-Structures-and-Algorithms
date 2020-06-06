#include<iostream>
#include<vector>
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vvb vector<vb>
using namespace std;
bool issafetoplace(vector<vector<int>>&boxe,int r, int c, int val)
{
    for(int i=0;i<9;i++)
    {
        if(boxe[i][c]==val)
        return false;
    }
    for(int j=0;j<9;j++)
    {
        if(boxe[r][j]==val)
        return false;
    }
    int nr=(r/3)*3;
    int nc=(c/3)*3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(boxe[nr+i][nc+j]==val)
            return false;
        }
    }
int sudoku_01(vvi &board,int idx){
    if(vidx==81){
        display(board);
        return 1;
    }
    int x=idx/9;
    int y=idx%9;
    if(board[x][y]==0){
        for(int num=1;num<=9;num++){
            if(issafetoplace(board,x,y,num)){
                board[x][y]=num;
                count+=sudoku_01(board,vidx+1);
                board[x][y]=0;
            }
        }
    }
    else
    {
        count+=sudoku_01(board,vidx+1);
    }
    return count;
}
void display(vvi&board){
    for(vi ar: board){
        for(int ele: ar){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

void sudoku(){
    vvi board;
    vv
}
int main(){
    vector<vector<int>> arr={{3,0,6,5,0,8,4,0,0},
                             {5,2,0,0,0,0,0,0,0},
                             {0,8,7,0,0,0,0,3,1},
                             {0,0,3,0,1,0,0,8,0},
                             {9,0,0,8,6,3,0,0,5},
                             {0,5,0,0,9,0,6,0,0},
                             {1,3,0,0,0,0,2,5,0},
                             {0,0,0,0,0,0,0,7,4},
                             {0,0,5,2,0,6,3,0,0}};
    cout<<sudoku(arr,0)<<endl;