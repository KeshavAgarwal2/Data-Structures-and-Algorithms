#include<iostream>
using namespace std;
int printrecdec(int a,int b)
{
if(a==b)
return a;
int value=(printrecdec(a+1,b));
cout<<value<<endl;
return a;

}
int main(int args,char**argv){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int value=printrecdec(0,n);
    return 0;
}