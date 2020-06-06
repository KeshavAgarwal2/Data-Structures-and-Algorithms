#include <iostream>
using namespace std;
int main(){
    int i,j,n,flag;
    cin>>n;
    for(i=2;i<=n;i++){
        flag=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<i<<" ";
    } 
    return 0;
}
