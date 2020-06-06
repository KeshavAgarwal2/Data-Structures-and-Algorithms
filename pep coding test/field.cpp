#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;
    cin>>n>>;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n);i++){ 
        flag=1;
        for(int j=i+1;j<=n;i++){
            if(arr[i] == arr[j]){
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            return true;
        }
        return false;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}