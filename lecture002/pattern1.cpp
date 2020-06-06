#include<iostream>
using namespace std;
int main(int args,char**argv){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    
    int nst=1;

    for(int r=1; r<=n; r++)
    {
        for(int cst=1;cst<=nst;cst++)
        {
            cout<<"*";
        }
        cout<<endl;
        nst++;
    }
   
}