#include<iostream>
#include<vector>
using namespace std;
bool isValidLocation(vector<vector<bool>>&isdone,int x, int y)
{
    if (x<0||y<0||x>=isdone.size()||y>=isdone.size()||isdone[x][y])
    {   
        return false;
    }
        return true;
}
int floodfill(vector<vector<bool>>&isdone, int sr,int sc,int er,int ec,string ans){
if(sr==er&&sc==ec){
    cout<<ans<<endl;
    return 1;
}
int count=0;
isdone[sr][sc]=true;
if(isValidLocation(isdone,sr+1,sc)){
    count+=floodfill(isdone,sr+1,sc,er,ec,ans+"D");
}
if(isValidLocation(isdone,sr,sc+1)){
    count+=floodfill(isdone,sr,sc+1,er,ec,ans+"R");
    }
if(isValidLocation(isdone,sr-1,sc)){
    count+=floodfill(isdone,sr-1,sc,er, ec,ans+"U");
}
if(isValidLocation(isdone,sr,sc-1)){
    count+=floodfill(isdone,sr,sc-1,er,ec,ans+"l");
    }

isdone[sr][sc]=false;
return count;
}
int main(int args,char** argv){

    vector<vector<bool>>isdone(3,vector<bool>(4,false));
    cout<<floodfill(isdone,0,0,1,2,"");
    return 0;
}
