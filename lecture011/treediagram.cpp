#include<iostream>
using namespace std;
int TreePath(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans=0;
    cout << "Pre" << n<<endl;
    ans+=TreePath(n-1);
    cout << "In" << n<<endl;
    ans+=TreePath(n-2);
    cout << "Post" << n<<endl;
    return ans+3;
}
int main()
{
    cout << TreePath(5);
}