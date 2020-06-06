#include<iostream>
#include<vector>
using namespace std;
vector<string>words={".,:;","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz","@$&","-_%"};
int keypad(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    int idx1=ques[0]-'0';
    string word=words[idx1];
    for(int i=0;i<word.length();i++){
        count+=keypad(ques.substr(1),ans+word[i]);
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
    