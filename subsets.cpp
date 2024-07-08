class Solution {
public:
vector<vector<int>>ans;
    void g(vector<int>&v,int i,vector<int>&nums)
    {
        if(i==nums.size())
        {
            ans.push_back(v);
            return;
        }
        g(v,i+1,nums);
        v.push_back(nums[i]);
        g(v,i+1,nums);
        v.pop_back();


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v1;
        g(v1,0,nums);
        return ans;
    }
};
