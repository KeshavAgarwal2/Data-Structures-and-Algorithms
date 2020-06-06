class Solution {
    public:
    void downheapify(vector<int> &arr, int idx, int lidx)
{
    int maxidx = idx;
    int lci = (idx<<1) + 1;
    int rci = (idx<<1) + 2;

    if (lci <= lidx && arr[lci]>arr[maxidx])
        maxidx = lci;

    if (rci <= lidx && arr[rci]>arr[maxidx])
        maxidx = rci;

    if (maxidx != idx)
    {
        swap(arr[maxidx], arr[idx]);
        downheapify(arr, maxidx, lidx);
    }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size()-1;
            for(int i=n;i>=0;i--)
            {
                downheapify(nums,i,n);
            }
            for(int i=0;i<k;i++)
            {
                swap(nums[0],nums[n-i]);
                downheapify(nums,0,n-i-1);
            }
            return nums[n-k+1];
    }
};
