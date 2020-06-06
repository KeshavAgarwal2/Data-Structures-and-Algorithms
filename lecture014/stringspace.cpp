#include<iostream>
#include<vector>
using namespace std;
int stringspace(int n)
{
if(n==0)
return 0;
int value=(stringspace(n-1));
cout<<value+1;
return n;

}
int main(int args,char**argv){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int value=stringspace(n);
    return 0;
}