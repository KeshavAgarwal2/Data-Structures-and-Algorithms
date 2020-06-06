#include<iostream>
using namespace std;
int mazePath(int sr,int sc,int er,int ec,string ans){
if(sr==er&&sc==ec){
    cout<<ans<<" ";
    return 1;
}
int count=0;
if(sc+1<=ec){
    count+=mazePath(sr,sc+1,er,ec,ans+"H");
}
if(sr+1<=er){
    count+=mazePath(sr+1,sc,er,ec,ans+"V");
}
return count;
}
void mazePath(){
    cout<<mazePath(0,0,2,2,"")<<endl;
}

int main(int args,char** argv){
    mazePath();

}