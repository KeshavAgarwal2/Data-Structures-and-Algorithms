#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isValidSpot(int r,int c,int n,int m)
{
    if (r<0||c<0||r>=n||c>=m)
    {
    return false;
    }
    return true;
}
bool isQueenSafe(vector<vector<bool>> &boxes, int x, int y)
{
    int n = boxes.size();
    int m = boxes[0].size();
    int dir[4][2] = {{0,-1},{-1,-1},{-1,0},{-1,1}};
    for(int i=0;i<4;i++){
        for(int rad=1;rad<max(n,m);rad++){
            int r = x+dir[i][0]*rad;
            int c = y+dir[i][1]*rad;
            if(isValidSpot(r,c,n,m) && boxes[r][c]){
                return false;
            }  
        }
    }
    return true;
}
int nqueencomb(vector<vector<bool>> &boxes, int idx,int tnq, int q, string ans)
{
    if (q==tnq+1)
    {
    cout<<ans<<endl;
    return 1;
    }
    int n = boxes.size();
    int m = boxes[0].size();
    int count=0;
    for(int i=idx;i<n*m;i++)
    {
        int r=i/m;
        int c=i%m;
        if(isQueenSafe(boxes,r,c))
        {
            boxes[r][c]=true;
            count += nqueencomb(boxes,i+1,tnq,q+1,ans + "b" + to_string(i+1)+ "q"+ to_string(q)+" ");
            boxes[r][c]=false;
        }
    }
    return count;
}
int main()
{
    vector<vector<bool>> boxes(4,vector<bool> (4,false));
    cout<<nqueencomb(boxes,0,4,1,"")<<endl;
    return 0;
}