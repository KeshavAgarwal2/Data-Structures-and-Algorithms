#include<iostream>
#include<vector>
using namespace std;
int subseq(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    count+=subseq(str.substr(1),ans);
    count+=subseq(str.substr(1),ans+str[0]);
    return count;
}
void basicques(){
    cout<<subseq("abc","")<<endl;

}
void solve(){
    basicques();
}
int main(){
    solve();
    return 0;
}