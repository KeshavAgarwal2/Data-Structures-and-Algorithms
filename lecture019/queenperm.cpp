#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<bool>&isdone,int boxes, int box,int tnq, int q, string ans)
{
    if (box>=0,box>=isdone.size()||isdone[box])
    {
    return false;
    }
    return true;
}
int queenper(vector<bool>&isdone,int boxes,  int tnq, int q, string ans) 
{ 
    if(q==tnq+1)
    {
        cout<<ans<<endl;
        return 1;

    }   
    int count=0;
    for(int i=0;i<=boxes;i++)
    {
        if(isdone[i]==false)
        {
            isdone[i]=true;
            count += queenper(isdone,boxes,tnq,q+1,ans + "b" + to_string(i)+ "q"+ to_string(q));
            isdone[i]=false;
        }
    }
    return count;
}
int queenper(int boxes,  int tnq, int q, string ans) 
{ 
    if(q==tnq+1)
    {
        cout<<ans<<endl;
        return 1;

    }   
    int count=0;
    for(int i=0;i<=boxes;i++)
    {
        if(isdone[i]==false)
        {
            isdone[i]=true;
            count += queenper(isdone,boxes,tnq,q+1,ans + "b" + to_string(i)+ "q"+ to_string(q));
            isdone[i]=false;
        }
    }
    return count;
}
int main()
{
    vector<bool>isdone(5,false);
    cout<<queenper(isdone,5,3,1,"")<<endl;
    return 1;
}