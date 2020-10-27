class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() < 2 || k == 0) {
            return;
        }
        if (k > nums.size()) {
            k = k % nums.size();
        }
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end && start < nums.size() && end > 0) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};