#include<iostream>
using namespace std;

int main(int args,char**argv){
    int n;
    cin>>n;
    int nsp=2*(n-1)-1;
    int nst=1;
    int val=1;
    for(int r=1;r<n;r++){
           for(int cst=1;cst<=nst;cst++){
                cout<<val;
                val++;
            }
            
            for(int csp=1;csp<=nsp;csp++){
                cout<<" ";
            }
            
            for(int cst=1;cst<=nst;cst++){
                val--;
                cout<<val;
            
            }
            cout<<endl;
            nsp-=2;
            nst++;
    }
        for(int cst=1;cst<=nst;cst++){
            cout<<val;
            val++;
        }
            
        for(int cst=1;cst<nst;cst++){
                val--;
                cout<<val;
            
            }
           
return 0;
    }
