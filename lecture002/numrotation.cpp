#include<iostream>
using namespace std;

int main(int args,char**argv){
    int n;
    cin>>n;
    int temp=n;
    int digit=0;
    while(temp!=0){
    temp=temp/10;
    digit++;
    }
    cout<<"No. of digits: "<<digit<<endl;
    cout<<"Enter no. of rotations: ";
    int r;
    cin>>r;
    r%=digit;
    if(r<0){
        r+=digit;
    }
    int mul=1;
    int div=1;
     for(int i=1;i<=digit;i++){
     if(i<=r){
         mul*=10;
     }else{
     div*=10;
     }
     }
     int rem=n%div;
     int oldvalue=n/div;
     n=rem*mul+oldvalue;
     cout<<n<<endl;
}