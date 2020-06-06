#include<iostream>
#include<vector>
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vvb vector<vb>
using namespace std;
int queen(int n, int r, int tnq,vb &col,vb &diag, vb &adiag,string ans){
if(r==n || tnq==0){
    if(tnq==0){
        cout<<ans<<endl;
        return 1;
    }
    return 0;
}
int count=0;

for(int c=0;c<n;c++){
    if(!col[c] && !diag[r+c] && !adiag[r-c+n-1]){
        col[c]=true;
        diag[r+c]=true;
        adiag[r-c+n-1]=true;
        count+=queen(n,r+1,tnq-1,col,diag,adiag,ans+"("+to_string(r)+","+to_string(c)+")");
        col[c]=false;
        diag[r+c]=false;
        adiag[r-c+n-1]=false;
    }
}
return count; 
}
int queen2(int n, int r, int tnq,int &col,int &diag,int &adiag,string ans){
if(r==n || tnq==0){
    if(tnq==0){
        cout<<ans<<endl;
        return 1;
    }
    return 0;
}
int count=0;

for(int c=0;c<n;c++){
    //if(!col[c] && !diag[r+c] && !adiag[r-c+n-1]){
        int w=1<<c;
        int x=1<<(r+c);
        int y=1<<(r-c+n-1);
        if(!(col&w) && !(diag&x) && !(adiag&y)){
        col^=w;
        diag^=x;
        adiag^=y;
        count+=queen2(n,r+1,tnq-1,col,diag,adiag,ans+"("+to_string(r)+","+to_string(c)+")");
        col^=w;
        diag^=x;
        adiag^=y;
    }
}
return count;
}
int main(){
    int col=0;
    int diag=0;
    int adiag=0;    
    int c=4;
    // vb col(4,false);
    // vb diag(r+c-1,false);
    // vb adiag(r+c-1,false);
    //cout<<queen(c,0,4,col,diag,adiag," ")<<endl;
    cout<<queen2(c,0,4,col,diag,adiag," ")<<endl;
}
