#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid;

        std::vector<int> ans(2, -1);

        // Binary search to find the target
        while (low <= high) {
            mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans[0] = std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();
                ans[1] = std::upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
                return ans;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
