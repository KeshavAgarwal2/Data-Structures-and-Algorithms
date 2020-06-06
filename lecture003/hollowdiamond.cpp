#include <iostream>
using namespace std;
int main() {
    int r,n,cst,csp,nst,nsp;
    cin>>n;
    nst=n/2+1;
    nsp=1;
    for(r=1;r<=n;r++)
    {
        for(cst=1;cst<=nst;cst++)
            cout<<"*";
        for(csp=1;csp<=nsp;csp++)
            cout<<" ";
        for(cst=1;cst<=nst;cst++)
            cout<<"*";
        if(r<=n/2)
        {
            nst--;
            nsp+=2;
        }
        else
        {
            nst++;
            nsp-=2;
        }
        cout<<endl;
    }
    return 0;
}
