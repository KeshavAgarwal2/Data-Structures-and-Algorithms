#include<iostream>
#include<vector>
using namespace std;
void spiral(vector<vector<int>>&arr){
    int minr=0;
    int minc=0;
    int maxr=arr.size()-1;
    int maxc=arr[0].size()-1;
    int tne=arr.size()*arr[0].size();
    int count=0;
    while(count<tne){
        for(int col=minc;col<=maxc&&count<tne;col++){
            cout<<arr[minr][col]<<" ";
            count++;
        }
        minr++;
        for(int row=minr;row<=maxr&&count<tne;row++){
            cout<<arr[row][maxc]<<" ";
            count++;
        }
        maxc--;
        for(int col=maxc;col>=minc&&count<tne;col--){
            cout<<arr[maxr][col]<<" ";
            count++;
        }
        maxr--;
        for(int row=maxr;row>=minr&&count<tne;row--){
            cout<<arr[row][minc]<<" ";
            count++;
        }minc++;
    }
}
void input(vector<vector<int>>&arr){
    for(int row=0;row<arr.size();row++){
        for(int col=0;col<arr[0].size();col++){
           // cout<<"arr["<<row<<"]["<<col<<"] : ";
            cin>>arr[row][col];
        }
    }
}
void print(vector<vector<int>>&arr){
 
    for(vector<int>ar:arr){
        for(int i:ar){
            cout<<i<<" ";
         //   cout<<"arr["<<row<<"]["<<col<<"] : ";
        }
        cout<<endl;
    }
}
int main(int args,char** argv){
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
    vector<vector<int>>
    arr(r,vector<int>(c,0));
        input(arr);
        print(arr);
        spiral(arr);       
    
}
