#include<iostream>
using namespace std;
int mazePath(int sr,int sc,int er,int ec,string ans){
if(sr==er&&sc==ec){
    cout<<ans<<" ";
    return 1;
}
int count=0;
for(int jump=1;jump+sc<=ec;jump++){
    if(sc+jump<=ec){
        count+=mazePath(sr,sc+jump,er,ec,ans+"H");
    }
}
for(int jump=1;jump+sr<=er;jump++){
    if(sr+jump<=er){
        count+=mazePath(sr+jump,sc,er,ec,ans+"V");
    }
}
for (int jump=1;sc+jump<=ec && sr+jump<=er;jump++){
    if(sc+jump<=ec&&sr+jump<=er){
        count+=mazePath(sr+jump,sc+jump,er,ec,ans+"D");
    }
}
return count;
}
void mazePath(){
    cout<<mazePath(0,0,2,2,"")<<endl;
}

int main(int args,char** argv){
    mazePath();

}