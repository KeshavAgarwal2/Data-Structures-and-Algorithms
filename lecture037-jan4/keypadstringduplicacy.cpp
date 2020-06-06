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
    if(ques.length()>=2){
        int idx=idx1*10+(ques[1]-'0');
        if(idx>=10 && idx<=11){
            word=words[idx];
        }
        for(int i=0;i<word.length();i++){
            count+=keypad(ques.substr(2),ans+word[i]);
        }
    }
    return count;
}
    void basicques(){
         cout<<keypad("10110","");
    }
    void solve(){
        basicques();
    }
    int main(){
        solve();
        return 0;
    }
    