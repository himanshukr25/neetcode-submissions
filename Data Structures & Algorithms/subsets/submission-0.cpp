class Solution {
public:
    vector<vector<int>>possible;
    void comb(vector<int>& nums, vector<int>& ans, int i) {
        if(i==nums.size()) {
            possible.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        comb(nums,ans,i+1);

        ans.pop_back();
        comb(nums,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        comb(nums,ans,0);
        return possible;
    }
};
