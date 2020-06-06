#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<=n; i++)
    {
        int val=1;
        for(int j=0; j<=i; j++)
        {
            cout<<val<<" ";
            val = (i-j)*val/(j+1);
        }
        cout<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    pattern(n);
    return 0;
}