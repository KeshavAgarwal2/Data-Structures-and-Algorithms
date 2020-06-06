#include <iostream>
#include <algorithm>
using namespace std;
//print no.s till input n eg:n=5print till no.5 

int main() {
    int a,b,sum,n;
    cin>>n;
    a=0;
    b=1;
    sum = a+b;
    if(n==0)
        cout<<a<<" ";
    else if(n==1)
        cout<<a<<" "<<b<<" "<<sum<<" ";
    else{
    cout<<a<<" ";
    cout<<b<<" ";
    while(sum<=n){
    cout<<sum<<" ";
    a=b;
    b=sum;
    sum=a+b;
    }
  }
    return 0;
}

