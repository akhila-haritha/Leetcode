class Solution {
public:
    int leftSum(vector<int>& nums, int p) {
        if (p == 0) return 0; // Base case: no elements to the left
        return nums[p - 1] + leftSum(nums, p - 1);
    }

    int rightSum(vector<int>& nums, int p) {
        if (p == nums.size() - 1) return 0; // Base case: no elements to the right
        return nums[p + 1] + rightSum(nums, p + 1);
    }

    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int difference = abs(leftSum(nums, i) - rightSum(nums, i));
            ans.push_back(difference);
        }
        return ans;
    }
};
