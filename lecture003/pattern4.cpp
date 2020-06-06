#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int nst=1,nsp=n/2;
    int value;
    for(int r=1;r<=n;r++)
    {
        for(int csp=1;csp<=nsp;csp++){
            cout<<"  ";
        }
        
        if(r<=n/2)
        {value=r;}
        else
           { value=n-r+1;}
        for(int cst=1;cst<=nst;cst++)
        {
            cout<<value<<" ";
            if(cst<=nst/2)
            {
                value++;
            }
            else{
                value--;
            }
        }
            if(r<=n/2)
            {
                nsp--;
                nst+=2;
            }
            else{
                nsp++;
                nst-=2;
            }    
            cout<<endl; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
}
