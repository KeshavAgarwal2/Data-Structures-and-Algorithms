#include<iostream>
#include<vector>
using namespace std;
vector<string>words={".,:;","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz","@$&","-_%"};
int subseq(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    count+= subseq(str.substr(1),ans);
    count+= subseq(str.substr(1),ans+str[0]);
}
int perm(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    bool vis[26]={0};
    for(int i=0;str.length();i++){
        if(
    }


    return count;
}
    void basicques(){
         cout<<keypad("456","");
    }
    void solve(){
        basicques();
    }
    int main(){
        solve();
        return 0;
    }
    