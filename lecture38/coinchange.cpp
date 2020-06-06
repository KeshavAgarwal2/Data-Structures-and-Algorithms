#include<iostream>
#include<vector>
using namespace std;
int permuinfi(vector<int>&arr,int tar,string ans){
    if(tar==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(tar-arr[i]>=0){
            count+=permuinfi(arr,tar-arr[i],ans+to_string(arr[i]));
        }
    }
    return count;
}
int permuwithoutrep(vector<int>&arr,vector<bool>&vis,int tar,string ans){
    if(tar==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if((!vis[i]) && (tar-arr[i]>=0)){
            vis[i]=true;
            count+=permuinfi(arr,tar-arr[i],ans+to_string(arr[i]));
            vis[i]=false;
        }
    }
    return count;
int combinfi(vector<int>&arr,int idx,int tar,string ans){
    if(tar==0){
    cout<<ans<<endl;
    return 1;
    }
    int count=0;
    for(int i=idx;i<arr.size();i++){
        if(tar-arr[i]>=0){
            count+=combinfi(arr,i,tar-arr[i],ans+to_string(arr[i]));
        }
    }
    return count;    
}
int combwithoutrep(vector<int>&arr,int idx,int tar,string ans){
    if(tar==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=idx;i<arr.size();i++){
        if(tar-arr[i]>=0){
            count+=combwithoutrep(arr,i+1,tar-arr[i],ans+to_string(arr[i]));
        }
    }
    return count;
}
int permuinfi(vector<int>&arr,int tar,string ans){
    if(tar==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(tar-arr[i]>=0){
            count+=permuinfi(arr,tar-arr[i],ans+to_string(arr[i]));
        }
    }
    return count;
}




void combipermu(){
    vector<int>arr {2,3,5,7};
    int tar=10;
    //cout<<permuinfi(arr,0,10," ");
    //cout<<combinfi(arr,0,10," ");
    cout<<combwithoutrep(arr,0,10," ");
    cout<<permuwithoutrep(arr,0,10," ");
}
int main(){
    combipermu();

    return 0;
}