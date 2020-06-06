#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
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

    return true;
}
int sudoku(vector<vector<int>>&boxe,int vidx)
{
    if(vidx==81)
    {
        
        display(boxe);
        cout<<endl;
        return 1;
    }
    int count=0;
    int r=vidx/9;
    int c=vidx%9;
    if(boxe[r][c]==0)
    {
        for(int val=1;val<=9;val++)
        {
            if(issafetoplace(boxe,r,c,val))
            {
                boxe[r][c]=val;
                count+=sudoku(boxe,vidx+1);
                boxe[r][c]=0;
            }
        }
    }
    else
    {
        count+=sudoku(boxe,vidx+1);
    }
    return count;
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
    
}