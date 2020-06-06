#include<iostream>
#include<vector>
using namespace std;
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

int main(int args,char** argv)
{
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
    vector<vector<int>>;
    arr(r,vector<int>(c,0));
        input(arr);
        print(arr);  
}
