#include<iostream>
#include<vector>
using namespace std;
int queencomb(int box,int idx,int qpsf,int tnq,string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=idx;i<box;i++){
        count+=queencomb(box,i+1,qpsf+1,tnq,ans+"b"+to_string(i)+"q"+to_string(qpsf));
    }
    return count;
}
int queenperm(vector<bool>&box,int qpsf,int tnq,string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<box.size();i++){
        if(!box[i]){
            box[i]=true;
            count+=queenperm(box,qpsf+1,tnq,ans+"b"+to_string(i)+"q"+to_string(qpsf)+"");
            box[i]=false;
        }
    }
    return count;
}
void queens(){
    vector<bool>box(5,false);
    cout<<queencomb(5,0,0,3,"")<<endl;
    
    
    //cout<<queenperm(box,0,3,"")<<endl;
}
int main(){
    queens();
    return 0;
}
