#include<iostream>
using namespace std;
int power(int a,int b){
if (b==0)
    return 1;
int ans=power(a,b-1);
ans*=a;
return ans;
}
int betterpower(int a,int b){
    if (b==0)
        return 1;
    int ans=power(a,b/2);
    ans*=ans;
    if(b%2!=0)
        ans*=a;
        return ans;
}
int main(int args,char** argv){
    
    int a=2,b;
    cin>>b; 

    int ans=power(a,b);
    cout<<ans<<endl;
    cout<<betterpower(a,b)<<endl;
    return 0;
}