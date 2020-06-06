#include<iostream>
using namespace std;
int boardPath(int si,int ei,string ans){
    
if(si==ei){
    cout<<ans<<" ";
    return 1;
}
int count=0;
for(int dice=1;dice<=6&&si+dice<=ei;dice++){
    count+=boardPath(si+dice,ei,ans+to_string(dice));
}
return count;
}
void boardPath(){
    cout<<boardPath(0,2,"")<<endl;
}

int main(int args,char** argv){
    boardPath();

}