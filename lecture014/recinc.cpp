#include<iostream>
using namespace std;
int printrecINC(int n)
{
if(n==0)
return 0;
int value=(printrecINC(n-1));
cout<<value+1;
return n;

}
int main(int args,char**argv){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int value=printrecINC(n);
    return 0;
}