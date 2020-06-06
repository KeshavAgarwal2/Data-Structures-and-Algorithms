#include<iostream>
#include<vector>
using namespace std;
int queencomb(int boxes, int box,int tnq, int q, string ans)
{
    if (q==tnq+1)
    {
    cout<<ans<<endl;
    return 1;
    }
    int count=0;
    for(int i=box;i<=boxes;i++)
    {
        count += queencomb(boxes,i+1,tnq,q+1,ans + "b" + to_string(i)+ "q"+ to_string(q));
    }
    return count;
}
int main()
{
cout<<queencomb(5,0,3,1,"")<<endl;
return 1;
}


