#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int count=0;
            int mask=(1<<i);
            for(int ele:nums)
            {
                if((ele & mask)!=0)
                    count++;
            }
            if(count%3!=0)
                ans |=mask;
        }
        return ans;
    }
};