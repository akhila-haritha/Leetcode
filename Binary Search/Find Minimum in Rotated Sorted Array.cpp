#include <vector>

class Solution {
public:
    int l = 0, r;

    int findMin(std::vector<int>& nums) {
        r = nums.size() - 1;
        return search(nums, l, r);
    }

    int search(std::vector<int>& nums, int l, int r) {
        if (r == l + 1 || r == l) {
            return std::min(nums[l], nums[r]);
        }

        int mid = (l + r) / 2;
        int leftMin = search(nums, l, mid);
        int rightMin = search(nums, mid + 1, r);

        return std::min(leftMin, rightMin);
    }
};
