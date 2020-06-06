#include<iostream>
#include<vector>
using namespace std;
bool iswordpresent(vector<string>&dict,string word)
{
    for (string arr:dict)
    {
        if(word.compare(arr)==0)
        {
            return true;
        }
    }
    return false;
}
int wordbreak(vector<string>&dict,string statement,string ans)
{
    if(statement.length()==0)
    {
        cout<<ans<<endl;
        return 1;
    }
}
    int count=0;
    for(int i=1;i<=statement.length();i++)
    {
        string str=statement.substr(0,i);
        if(iswordpresent(dict,str))
        {
            count+=wordbreak(dict,statement.substr(i),ans+str+" ");
        }
    }
    return count;
}
void wordbreak crypto