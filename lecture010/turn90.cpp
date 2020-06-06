#include<iostream>
#include<vector>
using namespace std;
void input(vector<vector<char>>&arr){
    for(int row=0;row<arr.size();row++){
        for(int col=0;col<arr[0].size();col++){
            cin>>arr[row][col];
        }
    }
}
void print(vector<vector<char>>&arr){
 
    for(vector<char>ar:arr){
        for(char i:ar){
            cout<<i<<" ";
         //   cout<<"arr["<<row<<"]["<<col<<"] : ";
        }
        cout<<endl;
    }
}
void diagonal(vector<vector<char>>&arr){
    for(int gap=0;gap<arr[0].size();gap++){
        for(int i=0, j=gap;i<arr.size()&&i<arr[0].size();i++,j++)
        cout<<arr[i][j]<<" ";
    }
}



int main(int args,char** argv){
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
    vector<vector<char>>
    arr(r,vector<char>(c,0));
        input(arr);
        print(arr);
        diagonal(arr);       
    return 0;    
    
}
