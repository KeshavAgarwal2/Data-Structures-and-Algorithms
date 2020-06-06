#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,n;
    cin>>n;
    a=0;
    b=1;
    if(n==1)
        cout<<a;
     else if(n==2)
        cout<<b;
     else{
        for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        if(i==n)
            cout<<sum;
        }
    }
}