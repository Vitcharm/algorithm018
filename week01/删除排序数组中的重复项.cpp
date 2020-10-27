class Solution {

public:

    int removeDuplicates(vector<int>& nums) {
       if(nums.size() < 2) {
           return nums.size();
       } 

       int slow = 0; 
       int fast = slow + 1; //快慢指针

       while (fast < nums.size()) {
           if (nums[fast] != nums[slow]) {
               slow++;
               nums[slow] = nums[fast];
               fast++;
           }
           else {
               fast++;
           }
       }

       return slow + 1;

    }
};